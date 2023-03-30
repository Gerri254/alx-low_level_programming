#include "lists.h"

/**
  * print_list - prints elements of a list
  * @h: pointer to list_t
  *Return: number of elements in the list
  */
size_t print_list(const list_t *h)
{
	size_t ne;

	ne = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ne++;
	}
	return (ne);
}
