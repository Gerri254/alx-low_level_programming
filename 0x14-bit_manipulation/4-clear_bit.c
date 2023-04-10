#include "main.h"
#include <stdio.h>
/**
  * clear_bit - sets value of bit to 0
  * @n: point to number to be set
  * @index: place to set value
  * Return: 1 if yes 0 if no
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
