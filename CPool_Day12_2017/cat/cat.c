/*
** EPITECH PROJECT, 2017
** cat.c
** File description:
** main support file for cat
*/

#include "../include/my.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int from_input(void)
{
	size_t size;
	size_t limit_size = 32768;
	char data[limit_size];

	for (; size > 0; ) {
		size = read(0, data, sizeof(data));
		my_putstr(data);
	}
	return (0);
}

int from_file(int ac, char **argv)
{
	int file;
	size_t size;
	size_t limit_size = 32768;
	char data[limit_size];

	for (int i = 1; i < ac; i++) {
		file = open(argv[i], O_RDONLY);
		if (file == -1) {
			my_putstr("cat :");
			my_putstr(argv[i]);
			my_putstr(": No such file or directory \n");
			return (84);
		}
		size = read(file, data, sizeof(data));
		write(1, data, size);
	}
	close(file);
	return (0);
}

int main(int argc, char const *argv[]) {
	if (argc == 1)
		from_input();
	if (argc >= 1)
		from_file(argc, argv);
	return (0);
}
