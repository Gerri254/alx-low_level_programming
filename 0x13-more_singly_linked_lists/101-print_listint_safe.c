#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * free_listp - frees list
  * @head: head of list
  * Return: no return
  */
void free_listp(listp_t **head)
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
 *print_listint_safe - print listint_t
 *@head: pointer to a const struct
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listp_t *hp, *n, *add;

	hp = NULL;
	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);
		n->p = (void *)head;
		n->next = hp;
		hp = n;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_listp(&hp);
	return (count);
}

