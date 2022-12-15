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

	num = 612852475143;

	for (i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			largest_pfactor = num / i;
	}
	printf("%ld", largest_pfactor);
	return (0);
}
