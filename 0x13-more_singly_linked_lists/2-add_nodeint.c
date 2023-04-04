#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginningof listint_t list.
 * @head: pointer to the head of the linkd list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new or NULL if it fails.
 */
listint_t *addnodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
