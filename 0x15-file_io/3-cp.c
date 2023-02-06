#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success or 97, 98, 99, or 100 if error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int fd1, fd2;
		ssize_t bytes_read;
		char buffer[1024];

		fd1 = open(argv[1], O_RDONLY, 0);

		if (fd1 < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

		while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0)
		{
			if (write(fd2, buffer, bytes_read) != bytes_read ||
			    fd2 < 0)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		if (bytes_read < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (close(fd1) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd%d\n",
				fd1);
			exit(100);
		}
		if (close(fd2) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd%d\n",
				fd2);
			exit(100);
		}
		return (0);
	}
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
