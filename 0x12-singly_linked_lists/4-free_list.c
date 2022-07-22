#include "lists.h"

/**
 * free_list - Function call
 * @head: Pointer to the linked list
 * Description: A function that frees a list_t list
 */


void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	if (head == NULL)
	{
		return;
	}
}
