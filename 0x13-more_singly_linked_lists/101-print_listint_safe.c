#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listsint_safe - Prints a listint_t linked list, handling loops.
 *
 * @head: A pointer to the first node in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head);
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *prev;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		prev = current;
		current = current->next;

		if (current < prev)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

