#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *free_list - frees a list
 *@head: a list that enters to teh function
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
