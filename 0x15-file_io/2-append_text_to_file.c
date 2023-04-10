#include "main.h"

/**
 * append_text_to_file - It appends text to the end of a file
 * @filename: This is a pointer to the name of a file
 * @text_content: The string to add to the end of the file
 * Return: -1 if it fails or is NULL
 * -1 if file is not existent or user lacks permission to write
 * 1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
