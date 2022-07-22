#include "lists.h"

/**
 * add_node_end - Function call
 * @head: Pointer to the head node
 * @str: Input value to add to the linked list
 * Desctription: Function to add a new node at the end of a string
 * Return: returns the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head, *last = NULL;
	list_t *ptr = (list_t *) malloc(sizeof(list_t));
	int len = 0;
	char *string;

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		string = NULL;
	}
	else
	{
		string = strdup(str);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	if (current == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
	ptr->str = string;
	ptr->len = len;
	ptr->next = last;
	return (ptr);
}
