/*
** EPITECH PROJECT, 2017
** my_show_word_array.c
** File description:
** thomas.foubert@epitech.eu
*/

int my_show_word_array(char *const *tab)
{
	int i;

	for (i = 0; tab[i] != '\0'; i++) {
		my_putstr(tab[i]);
		my_putchar('\n');
	}
	return (0);
}
