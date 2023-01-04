#include "main.h"

/**
 * wildcmp - compares two strings, returns 1 if matching, otherwise return 0.
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 *
 * Return: 1 if matching, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (s2 + 1 == '*')
			return(wildcmp(s1, s2 + 1));
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
