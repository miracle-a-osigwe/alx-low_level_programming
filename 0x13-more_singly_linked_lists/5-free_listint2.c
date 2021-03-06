#include "lists.h"

/**
 * free_listint2 - Function call
 * @head: pointer to the memory allocated for the operation
 * Description: A function that frees the list given
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
	{
		return;
	}

	current = *head;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
