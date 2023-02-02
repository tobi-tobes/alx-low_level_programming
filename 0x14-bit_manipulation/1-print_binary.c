#include "main.h"

/**
 * convert - converts a number to binary and prints it out
 * @n: number to be converted
 *
 * Return: nothing
 */
void convert(unsigned long int n)
{
	if (n < 1)
		return;

	convert(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	else
		_putchar('1');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	num = n;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	else
		convert(num);
}
