#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to the string
 * Return: (length)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
