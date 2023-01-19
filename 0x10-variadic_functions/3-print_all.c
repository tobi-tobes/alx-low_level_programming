#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @argp: pointer to current variable argument
 *
 * Return: Nothing
 */
void print_char(va_list argp)
{
	printf("%c", va_arg(argp, int));
}

/**
 * print_int - prints an integer
 * @argp: pointer to current variable argument
 *
 * Return: Nothing
 */
void print_int(va_list argp)
{
	printf("%d", va_arg(argp, int));
}

/**
 * print_float - prints a float
 * @argp: pointer to current variable argument
 *
 * Return: Nothing
 */
void print_float(va_list argp)
{
	printf("%f", va_arg(argp, double));
}

/**
 * print_string - prints a string
 * @argp: pointer to current variable argument
 *
 * Return: Nothing
 */
void print_string(va_list argp)
{
	char *string = va_arg(argp, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - prints anything.
 * @format: string of data types corresponding to arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	f_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	int i = 0, j;
	va_list ap;

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *formats[j].type)
			{
				formats[j].p(ap);
				if (format[i + 1] != NULL)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
