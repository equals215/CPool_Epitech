/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** thomas.foubert@epitech.eu
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i;

	if(s1[0] == '\0' || s2[0] == '\0')
		return (0);
	while(++i) {
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if(s1[i] == '\0' || s2[i] == '\0')
			return (0);
	}
	return (0);
}
