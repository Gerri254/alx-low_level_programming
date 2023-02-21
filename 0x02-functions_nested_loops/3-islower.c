#include "main.h"

/**
 *_islower - checks for lower case characters
 *
 *@c: - a char in ASCII
 *
 *Return:   return 1 if c is lower case.  0 if is else.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
