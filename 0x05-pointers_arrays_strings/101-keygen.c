#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwrods
 * Return: Always 0 (Success)
 */

int main(void)
{
	int L, M;

	srand(time(NULL));
	M = 0;
	while (M <= 2645)
	{
		L = (rand() % 128);
		M += L;
		printf("%c", L);
	}
	printf("%c", 2772 - M);
	return (0);
}
