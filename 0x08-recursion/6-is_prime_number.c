#include "main.h"

int prime_finder(int a, int i, int counter);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check if prime
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_finder(n, 2, 0));
}

/**
 * prime_finder - finds prime number
 * @a: number to check if prime
 * @i: increment number
 * @counter: counter for factors
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int prime_finder(int a, int i, int counter)
{
	if (i > a)
	{
		if (counter > 1)
			return (0);
		return (1);
	}
	if (a % i == 0)
		counter++;
	return (prime_finder(a, i + 1, counter));
}
