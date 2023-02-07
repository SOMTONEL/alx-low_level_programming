#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of the file
 * @text_content: pointer to string to write to file
 * Return: Failure/Success (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);
	return (-1);
}
