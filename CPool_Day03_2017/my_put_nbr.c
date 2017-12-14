/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** thomas.foubert@epitech.eu
*/

void iterate_power (long long int nb_long, int power)
{
	int nb_cut;

	while (power > 0) {
		if (nb_long / power > 1 && nb_long != 1) {
			nb_cut = (nb_long / power) % 10;
			my_putchar(nb_cut + 48);
		}
		power = power / 10;
	}
}

int my_put_nbr (int nb)
{
	long long int nb_long = nb;
	int power = 1000000000;

	if (nb_long != 0) {
		if (nb_long = 1)
			my_putchar('1');
		if (nb_long < 0 && nb_long != 1) {
			nb_long = -nb_long;
			my_putchar('-');
		}
		iterate_power(nb_long, power);
	} else {
		my_putchar('0');
	}
	return (0);
}
