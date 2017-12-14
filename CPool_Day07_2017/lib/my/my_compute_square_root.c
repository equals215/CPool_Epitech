/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** thomas.foubert@epitech.eu
*/
int my_compute_square_root(int nb)
{
	int i = 1;
	int nb_result = 1;

	if (nb == 0 || nb == 1)
		return (nb);
	while (nb != nb_result) {
		i++;
		nb_result = i * i;
		if (nb_result > nb)
			return (0);
	}
	return (i);
}
