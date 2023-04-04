#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at i
 * @head: pointer to pointer to listint_t
 * @idx: index
 * @n: integer
 * Return: pointer to new position
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		*head = new;
		return (NULL);
	}
	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current->next != NULL; i++)
		current = current->next;
	if (i < idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
