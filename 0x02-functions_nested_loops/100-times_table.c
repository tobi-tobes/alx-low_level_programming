#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to be put in
 *
 * Returns nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		times_table_checker(n);
	}
}
