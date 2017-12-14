/*
** EPITECH PROJECT, 2017
** tests_step-1.c
** File description:
** thomas.foubert@epitech.eu
*/

#include "./criterion/criterion.h"

Test(stepone, basic_test)
{
	char *str;
	char c;

	str = my_strdup("azertaiiuoh");
	c = 'a';
	uplowcase(str, c);
	cr_assert(step1_rec(uplowcase(str, c)) == 2);
}

Test(stepone, special_char_in_str_test)
{
	char *str;
	char c;

	str = my_strdup("azer t;a;ii!!uoh");
	c = 'a';
	uplowcase(str, c);
	cr_assert(step1_rec(uplowcase(str, c)) == 2);
}

Test(stepone, number_char_in_str_test)
{
	char *str;
	char c;

	str = my_strdup("1324242");
	c = '4';
	uplowcase(str, c);
	cr_assert(step1_rec(uplowcase(str, c)) == 2);
}
