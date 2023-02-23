#include "main.h"

/**
 *print_most_numbers - prints no's 0 - 9 excluding 2 & 4.
 *
 *Return: no return.
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');

}
