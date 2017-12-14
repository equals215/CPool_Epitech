/*
** EPITECH PROJECT, 2017
** my_rev_params
** File description:
** thomas.foubert@epitech.eu
*/
#include <unistd.h>

int put_argv(char const *str)
{
	char c = '\n';

	for (int i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	for (int i = (argc - 1); i >= 0; i--)
		put_argv(argv[i]);
	return(0);
}
