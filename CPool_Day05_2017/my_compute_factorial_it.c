/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** thomas.foubert@epitech.eu
*/

int my_compute_factorial_it (int nb)
{
	int nb_result = 1;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else {
		while (nb > 0) {
			nb_result *= nb;
			nb--;
		}
		return (nb_result);
	}
}
