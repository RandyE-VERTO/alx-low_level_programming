#include "lists.h"

/**
 * listint_len - returns the number of element
 * in a linked list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t iter;

	if (h == NULL)
		return (0);

	for (iter = 0; h != NULL; iter++)
	{
		h = h->next;
	}
	return (iter);
}
