#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets value of bit to one
 * @n: point to number to be set
 * @index: place to set value
 * Return: 1 if yes -1 if no
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((index >= (sizeof(unsigned long int) * 8)) || (n == NULL))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
