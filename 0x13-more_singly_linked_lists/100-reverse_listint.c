#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t list.
 *
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: A pointer to the first node of the reserved list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;
	return (*head);
}

