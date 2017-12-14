/*
** EPITECH PROJECT, 2017
** my_print_comb2
** File description:
** thomas.foubert@epitech.eu
*/

int display_digits (int a1, int b, int x, int y)
{
	my_putchar(a1 + 48);
	my_putchar(b + 48);
	my_putchar(' ');
	my_putchar(x + 48);
	my_putchar(y + 48);
	if (a1 != 9 || b != 8 || x != 9 || y != 9) {
		my_putchar(',');
		my_putchar(' ');
	}
	return (0);
}

int part_all_2_digits (int big_a, int big_x)
{
	int a1;
	int b;
	int x;
	int y;

	b = big_a % 10;
	a1 = (big_a - b)/10;
	y = big_x % 10;
	x = (big_x - y)/10;
	display_digits (a1, b, x, y);
	return (0);
}

int my_print_comb2 (void)
{
	char big_a = 0;
	char big_x;

	while (big_a <= 98) {
		big_x = big_a + 1;
		while (big_x <= 99) {
			part_all_2_digits (big_a, big_x);
			big_x = big_x + 1;
		}
		big_a = big_a + 1;
	}
	return (0);
}
