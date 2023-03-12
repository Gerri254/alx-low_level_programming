#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integers
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

/**
 * main - takes arguments
 * @argc: counts arguments
 * @argv: pointer to array of strings
 * Return: mult if two arguments and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mult *= _atoi(argv[i]);

		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
