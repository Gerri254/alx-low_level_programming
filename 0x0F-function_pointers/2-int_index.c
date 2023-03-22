#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for integer
 *@size: number of array elements
 *@array: the array
 *@cmp: pointer to compare function
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; size++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
