#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to POSIX
 * @filename: pointer to file
 * @letters: number of letters to print
 * Return: Failure(0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, str, letters);
	k = write(STDOUT_FILENO, str, j);

	if (i == -1 || j == -1 || k == -1 || k != j)
	{
		free(str);
		return (0);
	}
	free(str);
	close(i);

	return (k);
}
