/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** thomas.foubert@epitech.eu
*/

void checking_conditions_putchar (int z, int y, int x)
{
	my_putchar(z);
	my_putchar(y);
	my_putchar(x);
	if (z != '7' || y != '8' || x != '9') {
		my_putchar(',');
		my_putchar(' ');
	}
}

void iterate_var_y (int z, int y, int x)
{
	while (y <= '9') {
		x = y + 1;
		while (x <= '9') {
			checking_conditions_putchar(z, y, x);
			x++;
		}
		x = '0';
		y++;
	}
}

int my_print_comb (void)
{
	char x;
	char y;
	char z = '0';

	while (z <= '9') {
		y = z + 1;
		iterate_var_y(z, y, x);
		y = '0';
		z++;
	}
	return (0);
}
