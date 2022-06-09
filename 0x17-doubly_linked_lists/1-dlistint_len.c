#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: head of node
 * Return: number of nodes
 */ 

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
