#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be converted
 * @index: the index of the bit to get, starting from 0
 *
 * Return: value of the bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
		n = n >> index;
		return (n & 1);
	}
	return (-1);
}
