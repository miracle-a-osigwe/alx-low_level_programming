#include "lists.h"

/**
 * list_len - Function call
 * @h: Pointer to the linked list
 *
 * Description: prints the number of element in the node
 * Return: returns the size of the node
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
