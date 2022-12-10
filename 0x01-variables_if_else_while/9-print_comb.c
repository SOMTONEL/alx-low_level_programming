#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Le;

	/* your code goes there */
	for (Le = 48; Le < 58; Le++)
	{
		putchar(Le);
		if ((Le != 57))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
