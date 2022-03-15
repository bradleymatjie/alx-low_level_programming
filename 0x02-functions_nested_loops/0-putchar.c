#include "main.h"

/**
 * main- main block
 * Description: this program prints out
 * the string "_putchar" on the screen
 * Return: 0
 */

int main(void)
{
	int c;
	char wrd[9] = "_putchar";

	for (c = 0; c < 8; c++)
	{
		_putchar(wrd[c]);
	}
	_putchar('\n');
	return (0);
}
