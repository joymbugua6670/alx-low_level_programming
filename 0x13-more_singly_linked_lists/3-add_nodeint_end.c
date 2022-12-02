#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 * @head: A pointer to the address of the
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL)
			*head = new;

	else
	{
		*head = new;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
