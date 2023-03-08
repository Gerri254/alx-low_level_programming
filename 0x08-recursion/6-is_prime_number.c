#include "main.h"
int is_divisible(int num, int div);

/**
 * is_divisible - gets divisibility of a number
 * @num: number to be checked
 * @div: divisor
 * Return: 1 if divisible 0 if not
 */
int is_divisible(int num, int div)
{
	if (div < num)
	{
		if (num % div == 0)
			return (0);
		else
			return (is_divisible(num, div + 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if prime 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	else
		return (is_divisible(n, 2));
}
