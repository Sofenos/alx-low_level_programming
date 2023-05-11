#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of characters to be read and printed.
 *
 * Return: The actual number of bytes read and printed (w).
 *         0 if the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, t, w;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (!buf)
    {
        close(fd);
        return (0);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w = write(STDOUT_FILENO, buf, t);
    free(buf);
    close(fd);

    if (w == -1 || w != t)
        return (0);

    return (w);
}

