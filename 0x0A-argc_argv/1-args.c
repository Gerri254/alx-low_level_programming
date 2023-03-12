#include "main.h"
#include <stdio.h>
/**
 * main - takes arguments
 * @argc: counts  number of arguments
 * @argv: pointer to array of strings
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
