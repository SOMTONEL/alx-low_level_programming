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

	/* your code goes there */
	for (Le = 'a'; Le <= 'z'; Le++)
	{
		if (Le != 'q' && Le != 'e')
		putchar(Le);
	}
	putchar('\n');
	return (0);
}
