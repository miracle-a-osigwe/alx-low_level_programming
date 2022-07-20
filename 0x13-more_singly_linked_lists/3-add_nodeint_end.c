#include "lists.h"


/**
 * add_nodeint_end - Function call
 * @head: pointer to the linkedlist node
 * @n: integer to add to the node
 *
 * Description: Adds a new node to the beginning of a listint_t
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = NULL, *cursor = *head;

	if (ptr == NULL)
	{
		return (last);
	}
	else
	{
		ptr->n = n;
		ptr->next = last;
	}
	if (cursor == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = ptr;
	}
	return (ptr);
}
