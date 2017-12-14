/*
** EPITECH PROJECT, 2017
** my_print_digits
** File description:
** thomas.foubert@epitech.eu
*/

int my_print_digits(void) {
	int x;

	x = 48;
	while (x <= 57) {
		my_putchar(x);
		x = x + 1;
	}
	return (0);
}
