#include "lists.h"

/**
 * listint_len - Function call
 * @h: pointer to the linked list
 *
 * Description: Checks the length of the node
 * Return: returns the length of the node.
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
