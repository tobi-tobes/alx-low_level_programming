#include "main.h"
#include <studio.h>

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
		int j, count;

		count = 0;

		for (j = 0; j < argc; j++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
