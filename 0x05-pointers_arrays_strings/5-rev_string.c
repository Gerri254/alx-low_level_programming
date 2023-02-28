#include "main.h"

/**
 *rev_string - reverse a string
 *
 *@s: string
 */

void rev_string(char *s)
{
	char swp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		swp = s[i];
		s[i] = s[len1];
		s[len1--] = swp;
	}

}

