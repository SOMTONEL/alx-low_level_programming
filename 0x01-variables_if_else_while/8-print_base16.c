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
	int Le;

	char Ld;

	/* your code goes there */
	for (Le = '0'; Le <= '9'; Le++)
	{
		putchar(Le);
	}
	for (Ld = 'a'; Ld <= 'f'; Ld++)
	{
		putchar(Ld);
	}
	putchar('\n');
	return (0);
}
