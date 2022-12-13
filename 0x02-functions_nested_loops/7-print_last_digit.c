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
	int l;

	l = abs(n % 10);

	return (l);
}
