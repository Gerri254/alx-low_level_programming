#include "main.h"

/**
 *_strncat - concaterates two string
 *
 *@dest: string
 *@src: sring 2
 *@n: integer
 *
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;

	}

	dest[i] = '\0';

	return (dest);

}
