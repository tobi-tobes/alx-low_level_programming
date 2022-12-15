#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long num, prime_factor, highest_prime, factor;
	int i, j;

	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			factor = i;

			if (
