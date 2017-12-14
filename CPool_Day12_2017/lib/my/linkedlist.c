/*
** EPITECH PROJECT, 2017
** linkedlist.c
** File description:
** thomas.foubert@epitech.eu
*/
#include "mylist.h"
#include <stdlib.h>

control_ll_t *init_ll(void *data)
{
	control_ll_t *control_ll = malloc(sizeof(*control_ll));
	linked_list_t *linked_list = malloc(sizeof(*linked_list));
	linked_list->data = data;
	linked_list->next = NULL;
	control_ll->first = linked_list;
}

void insert_ll(control_ll_t *control_ll, void *data)
{
	linked_list_t *new = malloc(sizeof(*new));
	new->data = data;
	new->next = control_ll->first;
	control_ll->first = new;
}

void delete_first_node_ll(control_ll_t *control_ll)
{
	linked_list_t *delete = control_ll->first;
	control_ll->first = control_ll->first->next;
	free (delete);
}

void append_ll(control_ll_t *control_ll, void *data)
{
	
}
