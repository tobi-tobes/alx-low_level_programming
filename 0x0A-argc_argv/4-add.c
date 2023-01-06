#include "main.h"
#include <string.h>
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
		unsigned int k;
		char *element;

		sum = 0;

		for (j = 1; j < argc; j++)
		{
			element = argv[j];
			for (k = 0; k < strlen(element); k++)
			{
				if (element[k] < 48 || element[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[j]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
