#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *@separator: separates strings
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *st;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(ap, char *);
		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
