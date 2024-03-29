#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list argp, char *separator);
void print_int(va_list argp, char *separator);
void print_float(va_list argp, char *separator);
void print_string(va_list argp, char *separator);
int _putchar(char c);

/**
 * struct format_code - Struct format_code
 *
 * @type: The datatype
 * @p: The function associated with the datatype
 */
typedef struct format_code
{
	char *type;
	void (*p)(va_list argp, char *separator);
} f_t;

#endif
