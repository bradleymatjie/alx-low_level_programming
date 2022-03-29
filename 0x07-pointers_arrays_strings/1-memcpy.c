#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies n bytes from memory area src
 * to memory memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: amount of bytes to copy from source
 * Return: Dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
