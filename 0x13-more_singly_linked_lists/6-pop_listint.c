#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - delete the head node and retuens value
  * @head: pointer to pointer to headnode
  * Return: n
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
