/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** thomas.foubert@epitech.eu
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++);
	for (int j = 0;j < nb && src[j] != '\0'; j++) {
		dest[i] = src[j];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
