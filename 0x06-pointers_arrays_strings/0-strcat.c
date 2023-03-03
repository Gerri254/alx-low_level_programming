#include "main.h"

/**
 *_strcat - appends the src string to the dest
 *string
 *
 *@dest: a string pointer
 *@src:  a string
 *
 *Return: Returns a poiter to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
