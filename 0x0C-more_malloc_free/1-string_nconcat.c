#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string to concatenate
 * @s2: 2nd string to concatenate
 * @n: number of bytes of 2nd string to add
 *
 * Return: pointer to new string or NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, p = 0, m = 0, j, k;
	char *comb;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2] && p < n)
	{
		len2++;
		p++;
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
		comb[k] = s2[m];
		m++;
	}
	comb[k] = '\0';

	return (comb);
}
