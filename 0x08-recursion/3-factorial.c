#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: string whose length is to be determined
 *
 * Return: factorial of the input or -1 if less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return(n + factorial(n - 1));
}
