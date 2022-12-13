#include <unistd.h>

/**
 * print_sign - prints +, 0, or - based on the number
 * @n: The character to print
 *
 * Return: On success 1.
 * Return 0 or -1 when zero or negative respectively.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
