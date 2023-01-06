#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: 0 if successful or 1 if less than 2 arguments
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int j, product;

		product = 1;

		for (j = 1; j < argc; j++)
		{
			product *= atoi(argv[j]);
		}
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
