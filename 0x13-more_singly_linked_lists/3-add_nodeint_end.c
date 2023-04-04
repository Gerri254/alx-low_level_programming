#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint_end - adds node at end
  * @head: pointer to pointer
  * @n: integer to be inputted
  * Return: addres of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}

	while (last->next)
		last = last->next;

	last->next = newNode;
	return (newNode);
}
