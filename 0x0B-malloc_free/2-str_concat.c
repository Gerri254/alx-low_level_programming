#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concancates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer if yes NULL if no
 */
char *str_concat(char *s1, char *s2)
{
	char *as;
	int i, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = ci = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	as = malloc(sizeof(char) * (i + ci + 1));

	if (as == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		as[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		as[i] = s2[ci];
		i++;
		ci++;
	}

	as[i] = '\0';
	return (as);
}
