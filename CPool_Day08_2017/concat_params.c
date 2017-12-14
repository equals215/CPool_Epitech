/*
** EPITECH PROJECT, 2017
** concat_params.c
** File description:
** thomas.foubert@epitech.eu
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *concat_params(int argc, char **argv)
{
	int i;
	int length = 1;
	char *str;

	for (i = 0; i < argc; ++i)
		length += my_strlen(argv[i]) + 1;
	str = malloc(length + 1);
	my_strcpy(str, argv[0]);
	for (i = 1; i < argc; ++i) {
		my_strcat(str, "\n");
		my_strcat(str, argv[i]);
	}
	return (str);
}
