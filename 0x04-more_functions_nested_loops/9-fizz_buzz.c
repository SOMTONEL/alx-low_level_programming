#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: returns 0
 */

int main(void)
{
	int W = 100;
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < W)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
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
