#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - returns pointer to newely allocated space in memory
 * @str: the string
 * Return: pointer if success NULL if not
 */
char *_strdup(char *str)
{
	char *p;
	int i, q;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		p[q] = str[q];

	return (p);
}
