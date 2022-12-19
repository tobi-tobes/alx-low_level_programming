#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: converted number if successful, 0 if error
 */
int _atoi(char *s)
{
	int p, i, sign;
	int num;

	p = 0;
	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
			sign *= 1;
		if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else
			break;
	}
	num *= sign;
	return (num);
}
