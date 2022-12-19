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
	int p, i, sign, length;
	int num;

	p = 0;
	sign = 1;
	num = 0;
	length = 0;

	while (s[p] != '\0')
	{
		length++;
		p++;
	}
	for (i = 0; i < length; i++)
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
