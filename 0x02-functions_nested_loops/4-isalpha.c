#include "main.h"

/**
 * _isalpha- prints out if input is a character or not
 * @c: input
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
