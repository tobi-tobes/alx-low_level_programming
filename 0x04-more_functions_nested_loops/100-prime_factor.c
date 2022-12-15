#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, num, largest_pfactor;
	double square;

	num = 612852475143;
	square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
			largest_pfactor = num / i;
	}
	printf("%ld", largest_pfactor);
	return (0);
}
