/*
** EPITECH PROJECT, 2017
** my_str_to_word_array.c
** File description:
** thomas.foubert@epitech.eu
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int is_alphanum(char c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97) || (c <= 57 && c >= 48))
		return (1);
	else
		return (0);
}

int count_word(char const *str)
{
	int word_number;
	int letter_number;
	int index = 0;

	while (str[index] != '\0') {
		for (index; is_alphanum(str[index]) == 1 && str[index] != '\0'; index++)
			letter_number++;
		if (letter_number > 0)
			word_number++;
		letter_number = 0;
		for (index; is_alphanum(str[index]) == 0 && str[index] != '\0'; index++)
			;
	}
	return word_number;
}
int *count_letters(char const *str)
{
	int i;
	int j = 0;
	int letter_number;
	int word_number = count_word(str);
	int *letters_map;

	letters_map = malloc(8 * word_number);
	for (i = 0; i < word_number; i++) {
		for (j; is_alphanum(str[j]) == 1 && str[j] != '\0'; j++)
			letter_number++;
		letters_map[i] = letter_number;
		for (j; is_alphanum(str[j]) == 0 && str[j] != '\0'; j++)
			;
		letter_number = 0;
	}
	return letters_map;
}

char **my_str_to_word_array(char const *str)
{
	int i = 0;
	int j = 0;
	int index = 0;
	int word_number = count_word(str);
	int *letters_map = count_letters(str);
	char **dest;

	dest = malloc(4 * word_number + 1);
	for (i; i < word_number && str[index] != '\0'; i++) {
		dest[i] = malloc(letters_map[i] + 1);
		for (j = 0; is_alphanum(str[index]) == 1 && str[index] != '\0'; j++) {
			dest[i][j] = str[index];
			index++;
		}
		dest[i][j] = '\0';
		for (index; is_alphanum(str[index]) == 0 && str[index] != '\0'; index++)
			;
	}
	dest[i] = '\0';
	return (dest);
}
