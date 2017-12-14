/*
** EPITECH PROJECT, 2017
** tests-my_put_nbr
** File description:
** thomas.foubert@epitech.eu
*/

#include <unistd.h>

int main(void)
{
	my_put_nbr(-2147483647);
	my_putchar('\n');
	my_put_nbr(42);
	my_putchar('\n');
	my_put_nbr(0);
	my_putchar('\n');
	return(0);
}
