#include "main.h"
#include <stdlib.h>

/**
 * print_str - prints a given string
 * @str: String to print out
 *
 * Return: nothing
 */
void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _isdigit - checks if string contains only digits
 * @n: String to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int _isdigit(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] < 48 || n[i] > 57)
			return (0);
	}
	return (1);
}

/**
 * _atoi - converts strings to integers
 * @s: String to convert
 *
 * Return: converted string
 */
unsigned long int _atoi(char *s)
{
	unsigned long int num = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		num = (num * 10) + (s[i] - '0');
	}
	return (num);
}

/**
 * print_number - prints integers to standard output
 * @n: Integer to print
 *
 * Return: nothing
 */
void print_number(unsigned long int n)
{
	unsigned long int size;

	size = 1000000000;

	do {
		if (size <= n || size == 1)
			_putchar((n / size) % 10 + '0');
		size = size / 10;
	} while (size != 0);
	_putchar('\n');
}

/**
 * main - multiplies two digits
 * @argc: Argument count
 * @argv: argument vector
 *
 * Return: 0 if successful; otherwise 98
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, prod;

	if (argc != 3)
	{
		print_str("Error");
		exit(98);
	}
	if (!(_isdigit(argv[1]) && _isdigit(argv[2])))
	{
		print_str("Error");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	prod = num1 * num2;

	print_number(prod);
	return (0);
}
