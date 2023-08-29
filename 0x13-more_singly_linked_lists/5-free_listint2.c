#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

