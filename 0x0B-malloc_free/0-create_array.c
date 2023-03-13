#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars and initializes
 * @size: size of array
 * @c: The chacter to be filled
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

