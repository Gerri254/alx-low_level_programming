#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer if yes NULL if no
 */
int *array_range(int min, int max)
{
	int *p, i, k = min;

	if (min > max)
		return (0);

	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (0);

	for (i = 0; i <= (max - min); i++)
		p[i] = k++;

	return (p);
}
