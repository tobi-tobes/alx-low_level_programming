#include "main.h"

/**
 * power - raises a given number to the power of another
 * @a: number to be raised
 * @b: number to be used as exponent
 *
 * Return: raised number
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int power = 1, i;

	for (i = 0; i < b; i++)
	{
		power = power * a;
	}
	return (power);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, length = 0, num = 0, i;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			length++;
		}
		for (i = 0; b[i] != '\0'; i++)
		{
			num = (int)b[i] - '0';
			sum += (num * power(2, length - 1 - i));
		}
		return (sum);
	}
	return (0);
}
