#include "main.h"

/**
 *print_rev - prints a string in reverse
 *
 *@s: a string
 */

void print_rev(char *s)
{
	int i, n, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
