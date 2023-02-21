#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 *Return: no return value.
 */

void print_alphabet_x10(void)
{
	int t;
	char i;

	for (t = 0; t != 10; t++)
	{
		for (i = 97; i != 123; i++)
		{
			_putchar(i);

		}
		_putchar('\n');
	}


}
