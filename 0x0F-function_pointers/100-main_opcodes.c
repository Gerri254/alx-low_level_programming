#include <stdio.h>
#include <stdlib.h>
/**
 * main - accepts arguments
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, h;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (h = 0; h < bytes; h++)
	{
		if (h == (bytes - 1))
		{
			printf("%02hhx\n", ar[h]);
			break;
		}
		printf("%02hhx ", ar[h]);
	}
	return (0);
}
