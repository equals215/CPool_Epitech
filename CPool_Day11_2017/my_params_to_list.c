/*
** EPITECH PROJECT, 2017
** my_params_to_list.c
** File description:
** thomas.foubert@epitech.eu
*/

#include "./include/mylist.h"
#include "./include/my.h"

linked_list_t *my_params_to_list(int ac, char const * const *av)
{
	control_ll_t *control_ll = init_ll(av[0]);

	for (int i = 1; i < ac; i++) {
		insert_ll(control_ll, av[i]);
	}
	return (&control_ll->first);
}
