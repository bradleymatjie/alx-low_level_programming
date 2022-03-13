#include <stdio.h>

/**
 * main- main block
 * Description: print out numbers of base 10
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
