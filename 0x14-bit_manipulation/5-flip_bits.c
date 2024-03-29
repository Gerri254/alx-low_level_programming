#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bits to flip
 * @n: original
 * @m: compare value
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
