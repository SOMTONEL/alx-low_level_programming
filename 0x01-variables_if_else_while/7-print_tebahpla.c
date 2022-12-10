#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
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
	for (Le = 'z'; Le >= 'a'; Le--)
		putchar(Le);

	putchar('\n');
	return (0);
}
