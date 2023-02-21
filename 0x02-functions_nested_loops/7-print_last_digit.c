#include "main.h"

/**
 *print_last_digit - gets the last digit of an integer number.
 *
 *@i: integer input.
 *
 *Return: return the last digit of a number.
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
