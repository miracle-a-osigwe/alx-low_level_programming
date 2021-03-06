#include "lists.h"

/**
 * add_node - Function call
 * @head: pointer to the linked list
 * @str: The string to add to the node
 *
 * Description: Function that adds a new node at the beginning of a linked list
 * Return: return the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = (list_t *) malloc(sizeof(list_t));
	int len;

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		ptr->str = NULL;
		ptr->len = 0;
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		len = strlen(str);

		ptr->str = strdup((char *) str);
		ptr->len = len;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
