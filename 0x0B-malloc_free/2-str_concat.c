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
	int len1 = 0, len2 = 0, n = 0, j, k;
	char *comb;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	comb = malloc((sizeof(char) * (len1 + len2)) + 1);

	if (comb == NULL)
		return ('\0');

	for (j = 0; s1[j] != '\0'; j++)
	{
		comb[j] = s1[j];
	}
	for (k = j; k < (len1 + len2); k++)
	{
		comb[k] = s2[n];
		n++;
	}
	comb[k] = '\0';

	return (comb);
}
