#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: 0 if successful or 1 if less not a positive digit
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int j, sum;

		sum = 0;

		for (j = 1; j < argc; j++)
		{
			if (atoi(argv[j]) && atoi(argv[j]) > 0)
				sum += atoi(argv[j]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
