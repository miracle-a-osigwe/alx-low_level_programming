#include "lists.h"

/**
 * print_list - Function call
 * @h: reference to the linked list
 * Description: Prints all the elements of a list_t list
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
