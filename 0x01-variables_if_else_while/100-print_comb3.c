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
	int Le = '0';
	int Lt = '0';

	/* your code goes there */
	for (Lt = '0'; Lt <= '9'; Lt++)
	{
		for (Le = '0'; Le <= '9'; Le++)
		{
			if (!((Le == Lt) || (Lt > Le)))
			{
				putchar(Lt);
				putchar(Le);
				if (!(Le == '9' && Lt == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
