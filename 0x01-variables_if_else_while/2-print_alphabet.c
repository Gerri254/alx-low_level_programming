#include <stdio.h>

/**
*main - Prints the alphabet
*
*Return: return Always 0 (success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int x;

for (x = 0; x < 26; x++)
{
putchar(alphabet[x]);
}
putchar('\n');
return (0);
}
