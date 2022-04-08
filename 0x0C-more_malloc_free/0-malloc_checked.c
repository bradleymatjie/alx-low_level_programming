#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * Description: if malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc memory space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
