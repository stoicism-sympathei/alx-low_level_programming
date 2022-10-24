#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to null
 *
 * *head: the listint_t argument (head)
 */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head)
	{
		while (*head)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
