#include "main.h"

/**
 *more_numbers - prints numbers (0 - 14) ten times.
 *
 *Return: null return.
 */

void more_numbers(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
