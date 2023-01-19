#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of strings to be printed
 * @separator: string to be printed between numbers
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *current_string;

	if (separator != NULL && n > 0)
	{
		va_start(ap, n);
		for (; i < n; i++)
		{
			current_string = va_arg(ap, char *);
			if (current_string == NULL)
				printf("(nil)");
			else
				printf("%s", current_string);
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
