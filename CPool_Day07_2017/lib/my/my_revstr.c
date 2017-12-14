/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** thomas.foubert@epitech.eu
*/
#include <stddef.h>

char *my_revstr(char *str)
{
	size_t i;
	char temp;

	if (str == NULL)
		return (0);
	if (str[0] == '\0')
		return (str);
	for (i = 0; str[i] != '\0'; i++) ;
	i -= 1;
	for (size_t j = 0; j < i; j++) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
	}
	return (str);
}
