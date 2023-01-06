#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int j;

		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}
	}
	return (0);
}
