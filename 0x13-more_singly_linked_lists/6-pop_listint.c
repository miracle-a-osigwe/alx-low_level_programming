#include "lists.h"

/**
 * pop_listint - Function call
 * @head: pointer to use
 * Description: A function that deletes the head node
 * Return: the head node's data or 0 where it failed
 */

int pop_listint(listint_t **head)
{
	long n;
	listint_t *temp;

	temp = *head;

	if (temp != NULL)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (n);
	}
	else
	{
		return (0);
	}
}
