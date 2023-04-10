#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print POSIX standard output.
 * @filename: textfile being read.
 * @letters: number of letters to read.
 * Return: actual number of letters it could read and print
 *		Otherwise 0 when file can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t rd, wt;
	int op;

	op = open(filename, 0_RDONLY);
	if (op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(op, buff, letters);
	wt = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(op);
	return (wt);
}

