/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** thomas.foubert@epitech.eu
*/

int my_putstr(char const *str)
{
	while (*str != '\0')
		my_putchar(*str++);
	return (0);
}
