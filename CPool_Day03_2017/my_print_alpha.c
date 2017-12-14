/*
** EPITECH PROJECT, 2017
** my_print_alpha
** File description:
** thomas.foubert@epitech.eu
*/

int my_print_alpha (void)
{
	int x;

	x = 97;
	while (x <= 122) {
		my_putchar(x);
		x = x + 1;
	}
	return (0);
}
