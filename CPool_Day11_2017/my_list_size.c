/*
** EPITECH PROJECT, 2017
** my_list_size.c
** File description:
** thomas.foubert@epitech.eu
*/

#include "./include/mylist.h"
#include "./include/my.h"

int my_list_size(linked_list_t const *begin)
{
	struct linked_list_t *begin;
	int i;

	size = begin;
	while (size->next != NULL) {
		size = size->next;
		i++;
	}
	return (i);
}
