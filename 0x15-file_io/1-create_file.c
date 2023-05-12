#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string containing the text to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd, len = 0;
ssize_t w;

if (!filename)
return (-1);

if (text_content)
{
while (text_content[len])
len++;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

w = write(fd, text_content, len);
if (w == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
