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
	int Lo = '0';

	/* your code goes there */
	for (Lt = '0'; Lt <= '9'; Lt++)
	{
		for (Le = '0'; Le <= '9'; Le++)
		{
			for (Lo = '0'; Lo <= '9'; Lo++)
			{
				if (!((Lt == Le) || (Le == Lo) || (Lt > Le) || (Le > Lo)))
				{
					putchar(Lt);
					putchar(Le);
					putchar(Lo);
					if (!(Lo == '9' && Le == '8' && Lt == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
