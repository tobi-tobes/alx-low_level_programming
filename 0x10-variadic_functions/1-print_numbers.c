#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of parameters to be printed
 * @separator: string to be printed between numbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator != NULL)
	{
		va_start(ap, n);
		for (; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
