/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
** thomas.foubert@epitech.eu
*/

int my_print_revalpha (void)
{
	char x;

	x = 122;
	while (x >= 97){
		my_putchar(x);
		x = x - 1;
	}
	return (0);
}
