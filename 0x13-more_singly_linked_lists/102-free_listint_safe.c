#include <stdlib.h>
#include "lists.h"
/**
  * free_listp2 - frees list
  * @head: head of list
  * Return: no return
  */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
  * free_listint_safe - frees a listint_t
  * @h: double pointer to head of list
  * Return: size of freed list
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listp_t *hp, *n, *add;
	listint_t *c;

	hp = NULL;
	while (*h != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);
		n->p = (void *)*h;
		n->next = hp;
		hp = n;

		add = hp;
		while (add->next != NULL)
		{
			add = add->next;

			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hp);
				return (count);
			}
		}
		c = *h;
		*h = (*h)->next;
		free(c);
		count++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (count);
}

