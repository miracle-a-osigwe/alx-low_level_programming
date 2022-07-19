#include "lists.h"

/**
 * print_listint - Function call
 * @h: reference to the linked list
 * Description: Prints all the elements of a list_t list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
