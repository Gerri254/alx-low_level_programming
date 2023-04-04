#include <stdio.h>
#include "lists.h"
/**
 * listint_len - number of elements in listint_t
 * @h: pointer to listint_h
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

