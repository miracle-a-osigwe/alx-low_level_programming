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
	int resp;

	listint_t *temp;

	temp = *head;

	if (temp != NULL)
	{
		n = (*head)->n;
		*head = (*head)->next;

		resp = isdigit(n);

		if (resp != 0)
		{
			free(temp);
			return (0);
		}
		else
		{
			free(temp);
			return (n);
		}
	}
	else
	{
		return (0);
	}
}
