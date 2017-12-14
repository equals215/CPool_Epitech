/*
** EPITECH PROJECT, 2017
** lang_determination.h Rush 2
** File description:
** thomas.foubert@epitech.eu + julien.ollivier@epitech.eu
*/
char *uplowcase(char *str, char letter);
int step4_rec(char *str, char letter);
int language(char *str);
char *my_strupcase(char *str);

struct Char_occur {
	char c;
	float percentage;
};

float *percentage_tab_calculation(char *argv[], float nb_letters) {
	int occur;
	float percent_tab[25];
	float percentage;
	char *str;

	str = argv[1];
	uplowcase(argv[1], 'a');
	for (int i = 0; str[i] != '\0'; i++) {
		occur = step4_rec(argv[1], i + 25);
		percentage = (occur * 100) / nb_letters;
		percent_tab[i] = percentage;
	}
	return (percent_tab);
}

struct Char_occur *sort_struct_by_percentage(struct Char_occur *letter)
{
	int i;
	int j;
	struct Char_occur temp;

	for(i = 0; i < 25-1; i++)  {
		for(j = i + 1; j < 25; j++)  {
			if(letter[i].percentage > letter[j].percentage)  {
				temp = letter[i];
				letter[i] = letter[j];
				letter[j] = temp;
			}
		}
	}
	return (letter);
}

struct Char_occur *put_percentages_in_struct(float *percent_tab)
{
	int i;
	struct Char_occur letter[25];

	for (i = 0; i <= 25; i++) {
		letter[i].c = i + 65;
		letter[i].percentage = percent_tab[i];
	}
	return(sort_struct_by_percentage(letter));
}

void display_lang(char *argv[], int nb_letters)
{
	char language_string[6];
	struct Char_occur *letter;

	letter = put_percentages_in_struct(percentage_tab_calculation(argv, nb_letters));
	for (int i = 0; i <= 6; i++) {
		language_string[i] = letter[i].c;
	}
	my_strupcase(language_string);
	language (language_string);
}
