#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads the textfile and prints to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: 0 if it fails or is NULL,
 * w - number of bytes to print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}

free(buffer);
close(o);

return (w);
}
