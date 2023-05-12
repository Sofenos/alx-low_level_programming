#include "main.h"

/**
 * append_text_to_file - Appends a string to the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: String to be added to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_written = 0;

	/* Check if the filename is valid */
	if (!filename)
		return (-1);

	/* Get the length of the string to append */
	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	/* Open the file for writing */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Append the string to the end of the file */
	if (len > 0)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

