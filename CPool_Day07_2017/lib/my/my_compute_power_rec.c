/*
** EPITECH PROJECT, 2017
** my_compture_power_rec
** File description:
** thomas.foubert@epitech.eu
*/

int my_compute_power_rec(int nb, int p)
{
	long long int result;

	if (p == 0)
		return (1);
	else if (p < 0)
		return (0);
	else {
		if (result > 2147483647)
			return (0);
		result = nb * my_compute_power_rec(nb, p - 1);
		return (result);
	}
}
