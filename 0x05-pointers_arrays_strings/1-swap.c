# include "main.h"

/**
 *swap_int - swaps two integers
 *
 *@a: a pointer to an int
 *@b: a pointer to an int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
