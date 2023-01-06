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
		printf(argv[0]);
		printf("\n");
	}
	return (0);
}
