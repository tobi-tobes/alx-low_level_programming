#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: determines size of square
 *
 * Return: no valur
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
