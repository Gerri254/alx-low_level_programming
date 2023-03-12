#include "stdio.h"

/**
 *_strlen - returns the length of a string
 *
 *@s: a string
 *
 *Return: returns the size of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
