#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: the number of letters function should read and print
 *
 * Return: actual number of letters that could be printed or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename != NULL)
	{
		buffer = malloc(letters);

		if (buffer == NULL)
			return (0);

		fd = open(filename, O_RDONLY, 0);

		if (fd < 0)
			return (0);

		bytes_read = read(fd, buffer, letters);

		if (bytes_read == -1)
		{
			free(buffer);
			return (0);
		}

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written != bytes_read || bytes_written == -1)
		{
			free(buffer);
			return (0);
		}

		free(buffer);
		close(fd);
		return (bytes_written);
	}
	return (0);
}
