#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a linked list and return the head nodes data
 * @head: pointer to the head node
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
		return (0);

	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
