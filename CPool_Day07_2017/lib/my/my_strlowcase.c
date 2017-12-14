/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** thomas.foubert@epitech.eu
*/

char *my_strlowcase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
	return (str);
}
