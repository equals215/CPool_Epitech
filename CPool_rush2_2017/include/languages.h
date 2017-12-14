/*
** EPITECH PROJECT, 2017
** languages.c
** File description:
** find the right language
*/
int match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return;
	if (*s1 == *s2)
		return (1 + match(s1 + 1, s2 + 1));
	if (*s1 != *s2)
		return (match(s1 + 1, s2 + 1));
}

int language(char *str)
{
	char tab[4];
	int i = 0;

	tab[0] = match("SAITNRO", str) + 48;
	tab[1] = match("AOSRNIT", str) + 48;
	tab[2] = match("NISRATO", str) + 48;
	tab[3] = match("TAOINSR", str) + 48;
	my_putstr("=> ");
	if (tab[0] >= tab[1] && tab[0] >= tab[2] && tab[0] >= tab[3])
		my_putstr("French");
	if (tab[1] >= tab[0] && tab[1] >= tab[2] && tab[1] >= tab[3])
		my_putstr("Spanish");
	if (tab[2] >= tab[0] && tab[2] >= tab[1] && tab[2] >= tab[3])
		my_putstr("German");
	if (tab[3] >= tab[0] && tab[3] >= tab[2] && tab[3] >= tab[1])
		my_putstr("English");
	return (0);
}
