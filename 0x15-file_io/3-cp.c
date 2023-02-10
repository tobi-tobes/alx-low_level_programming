#include "main.h"

/**
 * copier - copies the content of one file to another
 * @file1: source file
 * @file2: destination file
 *
 * Return: nothing on success or 98, 99, or 100 if error
 */
void copier(char *file1, char *file2)
{
	int fd1, fd2;
	ssize_t bytes_read;
	char buffer[1024];

	fd1 = open(file1, O_RDONLY);

	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file1);
		exit(98);
	}

	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd2, buffer, bytes_read) != bytes_read || fd2 < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success or 97, 98, or 99 on error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (argv[1] == NULL)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (argv[2] == NULL)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		copier(argv[1], argv[2]);
		return (0);
	}
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
