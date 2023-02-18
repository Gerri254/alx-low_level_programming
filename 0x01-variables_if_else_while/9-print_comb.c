#include <stdio.h>
/**
*main - prints out all numbers between 0 and 9 with commas and spaces
*
*Return: retun value always (0)
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
