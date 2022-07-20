#include "lists.h"

/**
 * free_listint - Function call
 * @head: pointer to the memory allocated for the operation
 * Description: A function that frees the list given
 */

void free_listint(listint_t *head)
{
	listint_t * temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
