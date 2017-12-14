/*
** EPITECH PROJECT, 2017
** my_params_to_array.c
** File description:
** thomas.foubert@epitech.eu
*/

#include "./include/my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
	int i;
	struct info_param *string;

	string = malloc(sizeof(struct info_param ) * ac);
	for (i = 0; i < ac; i++) {
		string[i].length = my_strlen(av[i]);
		string[i].str = av[i];
		string[i].copy = my_strdup(av[i]);
		string[i].word_array = my_str_to_word_array(av[i]);
	}
	return (string);
}
