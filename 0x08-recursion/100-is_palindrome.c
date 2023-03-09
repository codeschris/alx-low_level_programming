#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int n);

/**
 * _strlen_recursion - function obtain string len
 *
 * @s: input string
 *
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - function checks if string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int x;

	x = _strlen_recursion(s);
	if (x <= 1)
		return (1);
	return (palindrome(s, x));
}

/**
 * palindrome - function with a reversed string
 *
 * @s: input string
 * @n: len of string s
 *
 * Return: a reverse string
 */

int palindrome(char *s, int n)
{
	if (n <= 1)
		return (1);
	else if (*s == *(s + n - 1))
		return (palindrome(s + 1, n - 2));
	else
		return (0);
}
