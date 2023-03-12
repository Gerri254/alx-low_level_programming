#include "main.h"
#include <stdio.h>
/**
 * main - accepts arguments
 * @argc: counts the arguments
 * @argv: pointer to an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
