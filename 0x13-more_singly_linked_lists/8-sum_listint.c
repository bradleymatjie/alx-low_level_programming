#include "lists.h"
/**
 * sum_listint - function that return the sum of data in a linked list
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (sum);
}
