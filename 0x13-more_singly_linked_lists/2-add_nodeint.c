#include "lists.h"


/**
 * add_nodeint - Function call
 * @head: pointer to the linkedlist node
 * @n: integer to add to the node
 *
 * Description: Adds a new node to the beginning of a listint_t
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *) malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = (int) n;
		ptr->next = *head;
	}
	if (head != NULL)
	{
		*head = ptr;
	}
	return (ptr);
}
