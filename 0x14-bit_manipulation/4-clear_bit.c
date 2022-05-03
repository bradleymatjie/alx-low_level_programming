#include "main.h"

/**
 * clear_bit - program sets the value of bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if works, 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	insigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
