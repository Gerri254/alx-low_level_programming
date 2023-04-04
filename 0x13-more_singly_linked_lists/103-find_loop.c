#include "lists.h"
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to haed of linked list
 * Return: address of node where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (fast == NULL || fast->next == NULL)
		return (NULL);
	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

