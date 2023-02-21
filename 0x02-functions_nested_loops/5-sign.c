#include "main.h"

/**
 *print_sign - checks for the sign of a number
 *
 *@n: a signed number.
 *
 *Return: (1) if  0. (0) if is 0. (-1) return 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
	_putchar('\n');
}
