/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** thomas.foubert@epitech.eu
*/
#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n)
{
	size_t i;

	for (i = 0; (i < n) && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
