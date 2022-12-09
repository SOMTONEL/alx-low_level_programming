#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints some text'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Le;

	char Ld;

	/* your code goes there */
	for (Le = 'a'; Le <= 'z'; Le++)
	{
		putchar(Le);
	}
	for (Ld = 'A'; Ld <= 'Z'; Ld++)
	{
		putchar(Ld);
	}
	putchar('\n');
	return (0);
}
