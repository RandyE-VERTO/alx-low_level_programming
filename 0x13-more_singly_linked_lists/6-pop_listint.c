#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: head of the linked list
 *
 * Return: node's data as an int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int inp;

	if (!head || !*head)
		return (0);

	inp = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (inp);
}
