#include "main.h"
#include <stdlib.h>
/**
 * _realloc - relocates memory block
 * @ptr: pointer to previous memory
 * @old_size: size of allocated space for ptr
 * @new_size: new allocation
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *realloc;
	unsigned int i;

	if (ptr != NULL)
		copy = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	realloc = malloc(new_size);

	if (realloc == NULL)
		return (0);

	for (i = 0; ((i < old_size) || (i < new_size)); i++)
		*(realloc + i) = copy[i];

	free(ptr);
	return (realloc);
}
