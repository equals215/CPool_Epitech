/*
** EPITECH PROJECT, 2017
** match.c
** File description:
** thomas.foubert@epitech.eu
*/

int match(char const *s1, char const *s2)
{
	if (*s2 == '\0') {
		if (*s1 == '\0')
			return (1);
		return (0);
	}
	for (; (*s2 == '*') && (*(s2 + 1) == '*'); ++s2);
	if (*s1 == *s2)
		return(match((s1 + 1), (s2 + 1)));
	if (*s1 != *s2) {
		if (*s2 == '*' && (match((s1 + 1), s2) == 1 || match(s1, (s2 + 1)) == 1))
			return (1);
		else
			return (0);
	}
}
