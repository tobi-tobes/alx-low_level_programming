#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;

	while (res > 0)
	{
		count++;
		res &= (res - 1);
	}
	return (count);
}
