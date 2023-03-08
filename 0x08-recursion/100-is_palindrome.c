#include "main.h"
int _length(char *s);
int checkp(int i, int lg, char *s);
/**
 * _length - gets string length
 * @s: pointer to the string
 * Return: string length
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks for palindrome
 * @i: index
 * @lg: length of string
 * @s: pointer to the string
 * Return: 1 if palindrome and 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
			return (checkp(i + 1, lg - 1, s));
		else if (s[i] != s[lg])
			return (0);
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if number is palindrome
 * @s: pointer to a string to be checked
 * Return: 1 of palindrome 0 if not
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
