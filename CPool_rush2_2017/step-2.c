/*
** EPITECH PROJECT, 2017
** step-2.c Rush 2
** File description:
** thomas.foubert@epitech.eu + julien.ollivier@epietch.eu
*/
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

int step2_rec(char const *str, char letter)
{
	if (*str == '\0')
		return (0);
	if (str[0] == letter) {
		*str++;
		return (1 + step2_rec(str, letter));
	}
	*str++;
	return (0 + step2_rec(str, letter));
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

	my_putstr(argv[0]);
	my_putchar('\n');
	my_putstr(argv[1]);
	my_putchar('\n');
	for (int i = 2; i < argc; i++) {
		uplowcase(argv[1], argv[i][0]);
		occur = step2_rec(argv[1], argv[i][0]);
		my_putchar(argv[i][0]);
		my_putchar(':');
		my_put_nbr(occur);
		my_putchar('\n');
	}
	return (0);
}
