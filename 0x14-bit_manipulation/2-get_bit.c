#include "main.h"
#include <stdio.h>
/**
  * get_bit - return value of a bit
  * @index: point to locate value
  * @n: value inputed
  * Return: value of bit or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

