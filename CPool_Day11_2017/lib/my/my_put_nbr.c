/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Displays nbr given as param
*/

int my_put_nbr(int nb)
{
	if (nb < 0) {
		negativ(nb);
	} else if (nb > 0) {
		positiv(nb);
	} else {
		my_putchar('0');
	}
	return (0);
}

void negativ(int nb)
{
	int newnb = -nb ;

	my_putchar('-');
	positiv(newnb);
}

void positiv(int nb)
{
	int nb2 = 0;
	int store = 0;
	int div = 1000000000;
	int select0 = 0;

	while (div != 0) {
		nb2 = nb / div;
		store = nb2 % 10;
		if (store != 0 && select0 == 0 ) {
			my_putchar(store + '0');
			select0 = 1;
		} else if (select0 == 1) {
			my_putchar(store + '0');
		}
		div = div / 10;
	}
}
