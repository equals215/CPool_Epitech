/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** thomas.foubert@epitech.eu
*/
#include <stdlib.h>

char *my_strdup(char const *src)
{
	char *str;
	size_t length;

	length = my_strlen(src);
	str = malloc((sizeof(char) * length) + 1);
	my_strcpy(str, src);
	return (str);
}
