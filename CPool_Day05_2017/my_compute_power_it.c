/*
** EPITECH PROJECT, 2017
** my_compute_power_it
** File description:
** thomas.foubert@epitech.eu
*/
int my_compute_power_it (int nb, int p)
{
	long long int nb_result = nb;

	if (p == 0)
		return (1);
	else if( p < 0)
		return (0);
	else {
		p--;
		while( p > 0) {
			if (nb_result > 2147483647)
				return (0);
			nb_result *= nb;
			p--;
		}
		return (nb_result);
	}
}
