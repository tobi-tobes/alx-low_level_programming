#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, or 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
	int numbytes, j;
	char *op;

	if (argc == 2)
	{
		numbytes = atoi(argv[1]);

		if (numbytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		op = (char *)main;

		for (j = 0; j < numbytes - 1; j++)
		{
			printf("%02hhx ", op[j]);
		}
		printf("%02hhx\n", op[j]);
		return (0);
	}
	printf("Error\n");
	exit(1);
}
