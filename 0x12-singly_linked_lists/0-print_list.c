#include "lists.h"

/**
 * print_list - prints the elements of a singly linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%ld] %s\n", h->len, "(nil)");
		else
			printf("[%ld] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%ld] %s\n", h->len, h->str);
	return (a);
}
