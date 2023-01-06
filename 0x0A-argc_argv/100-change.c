#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: 0 if successful or 1 if not 1 argument
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int coins[] = {25, 10, 5, 2, 1};
		int change = 0, j;
		int cents = atoi(argv[1]);

		if (cents > 0)
		{
			for (j = 0; j < 5; j++)
			{
				while (cents >= coins[j])
				{
					cents -= coins[j];
					change++;
				}
			}
			printf("%d\n", change);
			return (0);
		}
		printf("0\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
