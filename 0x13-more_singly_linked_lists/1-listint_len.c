#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number
 * of element in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
