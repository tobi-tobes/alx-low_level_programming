#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string to be compared
 * @s2: pointer to second string to be compared
 *
 * Return: 0 if strings are the same, <0 if s1 is longer, >0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, length_one, length_two;

	length_one = length_two = 0;

	while (*s1)
	{
		length_one++;
		s1++;
	}
	while (*s2)
	{
		length_two++;
		s2++;
	}
	if (length_one > length_two)
		return (1);
	else if (length_one < length_two)
		return (-1);
	else
	{
		for (i = 0; i < length_one; i++)
		{
			if (s1[i] > s2[i])
				return (1);
			else if (s1[i] < s2[i])
				return (-1);
		}
		return (0);
	}
}
