#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer with specifications
 * @b: pointer to buffer to be printed out
 * @size: number of bytes of b to print out
 *
 * Return: no value
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				j = 0;

				while (j < 10)
				{
					if (i + j > size - 1)
					{
						if ((i + j + 1) % 2 == 0)
							printf(" ");
						printf("  ");
					}
					else if ((i + j + 1) % 2 == 0)
						printf("%02x ", b[i + j]);
					else
						printf("%02x", b[i + j]);
					j++;
				}
			}
			if (b[i] >= ' ' && b[i] <= '~')
			{
				if ((i + 1) % 10 == 0)
				{
					printf("%c\n", b[i]);
					continue;
				}
				printf("%c", b[i]);
			}
			else
			{
				if ((i + 1) % 10 == 0)
					printf(".\n");
				else
					printf(".");
			}
		}
	}
	printf("\n");
}
