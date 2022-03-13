#include <stdio.h>

/**
 * main- main block
 * Description: prints all possible combinations of 2 digits
 * numbers must be separarted by a comma and a space
 * 01 10 are considered the same.
 * print the smallest combination of the two digits only
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
