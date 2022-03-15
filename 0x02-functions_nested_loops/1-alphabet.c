#include "main.h"

/**
 * print_alphabet - this function prints the alphabet in lowercase.
 * Return: 0
 */

void print_alphabet(void)
{
	char text = 'a';

	while (text <= 'z')
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');
}
