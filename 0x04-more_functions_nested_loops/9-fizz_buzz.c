#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int j = i % 3;
		int k = i % 5;

		if (j == 0)
		{
			printf("Fizz ");
		}
		else if (k == 0)
		{
			printf("Buzz ");
		}
		else if (j == 0 && k == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
