#include "main.h"
int find_sqrt(int num, int root);

/**
 * find_sqrt - finds the square root of num
 * @num: number to get square root
 * @root: the root to be tested
 * Return: square root if square root is a natural num
 *	-1 if square root is not a natural num
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - get square root
 * @n: number to get square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
