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
	char *buffer;

	if (argc == 2)
	{
		numbytes = atoi(argv[1]);

		if (numbytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		buffer = (char *)main;

		for (j = 0; j < numbytes; j++)
		{
			if (j == numbytes - 1)
			{
				printf("%02hhx\n", buffer[j]);
			}
			printf("%02hhx ", buffer[j]);
		}
		return (0);
	}
	printf("Error\n");
	exit(1);
}
