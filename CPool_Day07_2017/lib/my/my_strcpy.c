/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** thomas.foubert@epitech.eu
*/
#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
