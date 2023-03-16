#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concancates two strings
 * @s1: first string
 * @s2: second string
 * @n: number for second string
 * Return: pointer if yes NULL if no
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s, j;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s = j = 0;
	while (s1[s] != '\0')
		s++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	p = malloc(sizeof(char) * (s + n + 1));

	if (p == NULL)
		return (0);

	for (i = 0; i < s; i++)
		p[i] = s1[i];

	for (; i < (n + s); i++)
		p[i] = s2[i - s];

	p[i] = '\0';
	return (p);
}
