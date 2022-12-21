#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int L;
	int M;
	int N;
	int temp;

	L = 0;
	while (s[L] != '\0')
	{
		L++;
	}
	M = 0;
	N = L - 1;
	while (M < N)
	{
		temp = s[M];
		s[M] = s[N];
		s[N] = temp;
		M++;
		N--;
	}
}
