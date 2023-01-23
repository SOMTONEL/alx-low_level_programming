#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int size, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
