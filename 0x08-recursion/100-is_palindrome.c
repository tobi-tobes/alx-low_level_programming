#include "main.h"

/**
 * str_length - returns the length of a string
 * @s: string to check length
 *
 * Return: length of string.
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * pal_checker - checks if string is a palindrome
 * @s: string to check
 * @l: length of string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int pal_checker(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != s[l])
		return (0);
	else
		return (pal_checker(s + 1, l - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check if palindrome
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = str_length(s) - 1;

	if (*s == '\0')
		return (1);
	return (pal_checker(s, len));
}
