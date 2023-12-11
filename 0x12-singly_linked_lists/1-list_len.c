#include "lists.h"

/**
 * list_len - returns the number of elements in a llinked list
 *
 * @h: pointer to the list head
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 1; h->next != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
