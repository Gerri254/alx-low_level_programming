#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds
 *@a: first number
 *@b: second number
 *Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracrts
 *@a: first number
 *@b: second number
 *Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 *@a: first number
 *@b: second number
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 *@a: first number
 *@b: second number
 *Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus remainer calculation
 *@a: first number
 *@b: second number
 *Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
