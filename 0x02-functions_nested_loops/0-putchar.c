#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: return Always(0)
 **/
int main(void)
{
	char print[] = "_putchar";
	int i;

	for (i = 0; print[i] != '\0'; i++)
	{
		_putchar(print[i]);
	}

	_putchar('\n');

	return (0);
}
