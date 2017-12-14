/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** thomas.foubert@epitech.eu
*/

char *my_evil_str(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*str != '\0') {
		str++;
		i++;
	}
	str = str - i;
	i  -= 1;
	while (j < i) {
		temp       = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		j++;
		i--;
	}
	return (str);
}
