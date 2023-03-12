#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area
 * @s: a pointer to memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * description_memset: Over there
 *
 * Return: A pointer to the filled memory area @s
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
