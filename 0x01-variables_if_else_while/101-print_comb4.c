#include <stdio.h>
/**
 * main- main block
 * Description: prints all the possible different combinations of 3 digits
 * the 3 digits are different
 * the numbers must be in ascending order
 * and print only the smallest combination of the 3 digit
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < 1)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
