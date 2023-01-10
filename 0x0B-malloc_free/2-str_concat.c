#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 *
 * Return: pointer to combined string if successful, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len, j, k, n;
	char *comb;

	len = n = 0;

	while (*s1)
	{
		len++;
		s1++;
	}
	while (*s2)
	{
		len++;
		s2++;
	}
	comb = malloc(sizeof(char) * len);

	if (comb == NULL)
		return ('\0');
	for (j = 0; s1[j] != '\0'; j++)
	{
		comb[j] = s1[j];
	}
	for (k = j; k < len; k++)
	{
		comb[k] = s2[n];
		n++;
	}
	comb[k] = '\0';

	return (comb);
}
