/*
** EPITECH PROJECT, 2017
** rush1
** File description:
** draw square
*/
void my_putstr(char *s, int channel)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(channel, &s[i], 1);
		i++;
	}
}

void draw_edge(char char1, char char2, char char3, int x)
{
	int i = 0;

	if (x > 1)
		my_putchar(char1);
	while (i < x - 2) {
		my_putchar(char2);
		i++;
	}
	if (x > 1)
		my_putchar(char3);
	my_putchar('\n');
}

void draw_line(int i, int x, char c, char c2)
{
	my_putchar(c2);
	while (i <= x) {
		my_putchar(c);
		i++;
	}
	if (x >= 1)
		my_putchar(c2);
}

void draw_mid(char char2, int x, int y)
{
	int i = 1;

	if (y > 1 && x > 1)
		draw_line(i, x - 2, ' ', char2);
	else if (x > 1)
		draw_line(i, x - 2, '-', 'o');
	else {
		my_putchar('o');
		if (y > 1)
			my_putchar('\n');
		while (i < y - 1) {
			my_putchar(char2);
			my_putchar('\n');
			i++;
		}
		if (y > 1)
			my_putchar('o');
	}
	my_putchar('\n');
}

void rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		my_putstr("Invalid size\n", 2);
	else if (y > 1 && x > 1) {
		draw_edge('o', '-', 'o', x);
		while (y > 2) {
			draw_mid('|', x, y);
			y--;
		}
		draw_edge('o', '-', 'o', x);
	}
	else {
		draw_mid('|', x, y);
	}
}
