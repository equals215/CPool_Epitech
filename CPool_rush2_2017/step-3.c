/*
** EPITECH PROJECT, 2017
** step-3.c Rush 2
** File description:
** thomas.foubert@epitech.eu
*/
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"
//#include "./include/"

void display(char **argv, int occur, float percentage, int i)
{
	int intpart = (int) percentage;
	int decpart = 100*(percentage - intpart);
	my_putchar(argv[i][0]);
	my_putchar(':');
	my_put_nbr(occur);
	my_putstr(" (");
	my_put_nbr(intpart);
	my_putchar('.');
	my_put_nbr(decpart);
	my_putstr("%)\n");
}

int letter_in_the_string(char *str)
{
	int counter = 0;
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++) {
		c = str[i];
		if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97)) {
			counter++;
		}
	}
	return (counter);
}

int step3_rec(char const *str, char letter)
{
	if (*str == '\0')
		return (0);
	if (str[0] == letter) {
		*str++;
		return (1 + step3_rec(str, letter));
	}
	*str++;
	return (0 + step3_rec(str, letter));
}

char *uplowcase(char const *str, char letter)
{
	if (letter > 64 && letter < 91)
		return (my_strupcase(str));
	if (letter > 96 && letter < 123)
		return (my_strlowcase(str));
}

int main(int argc, char const *argv[])
{
	int occur;
	float nb_letters;
	float percentage;

	my_putstr(argv[0]);
	my_putchar('\n');
	my_putstr(argv[1]);
	my_putchar('\n');
	nb_letters = letter_in_the_string(argv[1]);
	for (int i = 2; i < argc && argv[i] != '\0'; i++) {
		uplowcase(argv[1], argv[i][0]);
		occur = step3_rec(argv[1], argv[i][0]);
		percentage = (occur * 100) / nb_letters;
		display(argv, occur, percentage, i);
	}
	return (0);
}
