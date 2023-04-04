#include <stdlib.h>
#include "lists.h"
/**
  * get_nodeint_at_index - returns nth node
  * @head: pointer to listint_t
  * @index: index of node
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
