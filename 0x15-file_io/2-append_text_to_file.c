#include "main.h"



/**
 * append_text_to_file - Appends text at the end of the file.
 * @filename: A pointer to a name of the file.
 * @text_content: The string to add to the end of file.
 *
 * Return: If the function fails or the filename is NULL returns - -1.
 *         If the file does not exist then the user lacks write permissions returns - -1.
 *         Otherwise returns - 1.
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


