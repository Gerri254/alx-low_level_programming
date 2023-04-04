#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - add node at beginning
  * @head: pointer to pointer to listint_t
  * @n: the integer to be inputted
  * Return: address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
