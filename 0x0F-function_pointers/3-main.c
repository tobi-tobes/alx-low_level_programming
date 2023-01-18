#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - a program that performs simple operations.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of appropriate function or 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, sol;
	int (*ptr)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		ptr = get_op_func(argv[2]);

		if (ptr == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		sol = ptr(num1, num2);

		printf("%d\n", sol);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
