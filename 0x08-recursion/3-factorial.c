#include "main.h"
/**
 * factorial - get factorial of a number
 * @n: number to get factorial
 * Return: -1 if n < 0 and 1 if n = 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

