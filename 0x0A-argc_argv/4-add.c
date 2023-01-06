#include "main.h"
#include <studio.h>
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
	if (argc < 2)
		printf("0\n");
	else if (argc >= 2)
	{
		int j, sum;

		sum = 0;

		for (j = 1; j < argc; j++)
		{
			if (atoi(argv[j]) && atoi(argv[j]) > 0)
			{
				sum += atoi(argv[j]);
			}
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	return (0);
}
