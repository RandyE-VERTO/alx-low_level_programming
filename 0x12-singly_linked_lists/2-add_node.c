#include "lists.h"

int len(const char *str);

/**
 * add_node - adds a new node at the beginning of a linked list
 *
 * @head: pointer to the head of the linked list
 * @str:string to be added  at the new node
 *
 * Return: pointer to newly assigned node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	if (*head == NULL)
		nnode->next = NULL;
	else
			nnode->next = *head;
		nnode->str = strdup(str);
		nnode->len = len(str);
		*head = nnode;
	return (*head);
}


/**
 * len- gets the length of the string
 *
 * @str: the string with the required length
 *
 * Return: length of string
 */

int len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);

	a = 0; 
	while (str[a] != '\0')
	{       
		a++;
	}
	return (a);
}
