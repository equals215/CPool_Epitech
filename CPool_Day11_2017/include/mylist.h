/*
** EPITECH PROJECT, 2017
** mylist.H
** File description:
** thomas.foubert@epitech.eu
*/

typedef struct linked_list
{
	void *data;
	struct linked_list *next;
} linked_list_t;

typedef struct control_ll
{
	linked_list_t *first;
} control_ll_t;
