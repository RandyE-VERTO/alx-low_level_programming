#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning
 * of a linked list
 *
 * @head: pointer tothe head of the linked list
 * @n: new element to be created
 *
 * Return: address to the new element or NULL for failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	if (head == NULL)
		return (0);

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);
	if (*head == NULL)
		nnode->next = NULL;
	else
	{
		nnode->next = *head;
	}
	nnode->n = n;
	*head = nnode;

	return (*head);
}
