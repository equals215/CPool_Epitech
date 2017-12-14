/*
** EPITECH PROJECT, 2017
** step.c Rush 1
** File description:
** thomas.foubert@epitech.eu
*/
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

int step1_rec(char *str, char letter)
{
	if (*str == '\0')
		return (0);
	if (str[0] == letter) {
		*str++;
		return (1 + step1_rec(str, letter));
	}
	*str++;
	return (0 + step1_rec(str, letter));
}
