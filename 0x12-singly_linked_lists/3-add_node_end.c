#include "lists.h"

int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - a function that add nodes to the end
 * of the list
 *
 * @head: pointer to the first node
 * @str: the new node to be added at the end
 *
 * Return: pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *nnode;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		nnode = create_node(str);
	if (nnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = nnode;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nnode;
	return (*head);
}
/**
 * create_node - a function that declares/create nodes
 * @str: string to be inputed in the newly created node
 * Return: the pointer to the malloced memory
 */
list_t *create_node(const char *str)
{
	list_t *nnode;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	nnode->len = len(str);
	nnode->next = NULL;
	return (nnode);
}
/**
 * len - legth of a string
 * @str: string whoose length is to be found
 * Return: amount of length
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
