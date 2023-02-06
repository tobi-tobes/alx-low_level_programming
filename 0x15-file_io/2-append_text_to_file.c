#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to create
 * @text_content: string to write to the end of the file
 *
 * Return: 1 on success or -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t length = 0;
	ssize_t bytes_written;
	char *buffer;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0);

		if (fd < 0)
			return (-1);

		if (text_content != NULL)
		{
			for (i = 0; text_content[i] != '\0'; i++)
			{
				length++;
			}

			buffer = malloc((sizeof(char) * length) + 1);

			if (buffer == NULL)
				return (-1);

			for (i = 0; text_content[i] != '\0'; i++)
			{
				buffer[i] = text_content[i];
			}
			buffer[i] = '\0';

			bytes_written = write(fd, buffer, length);

			if (bytes_written < 0)
				return (-1);
			free(buffer);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
