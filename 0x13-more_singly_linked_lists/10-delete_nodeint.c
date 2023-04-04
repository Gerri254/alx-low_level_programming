#include <stdlib.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at index
  * @head: pointer to pointer to listint_t
  * @index: counter
  * Return: if success 1 if not -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < (index - 1) && current->next != NULL; i++)
		current = current->next;

	if (i == (index - 1) && current->next != NULL)
	{
		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
