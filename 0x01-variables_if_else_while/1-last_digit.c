#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints number and some text'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	g = n % 10;
	/* your code goes there */
	if (g > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, g);
	}
	else if ((g == 0))
	{
		printf("Last digit of %i is %i and is 0\n", n, g);
	}
	else if (g < 6 && (g != 0))
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, g);
	}
	return (0);
}
