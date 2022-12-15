#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: Determines size of the triangle
 *
 * Return: no value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (i != size)
			{
				k = size - i;

				while (k > 0)
				{
					_putchar(' ');
					k--;
				}
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
