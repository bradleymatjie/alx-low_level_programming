#include <stdio.h>

/**
 * main- main block
 * Description: prints all the number of base 16 in lowercase format
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
