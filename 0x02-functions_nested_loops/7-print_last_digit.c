#include <unistd.h>
#include <stdlib.h>

/**
 * print_last_digit - prints last digit of a number
 * @n: The character whose last digit will be printed out
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	write(1, &last_digit, 1);
	return (last_digit);
}
