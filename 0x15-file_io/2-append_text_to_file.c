#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - function that add a text to a file
 * @filename: pointer to the file
 * @text_content: pointer to the txt content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writeout, len;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_WRONLY | O_APPEND);
	if (openfile == -1)
		return (-1);
	if (text_content == NULL)
	{
		for (len = 0; text_content[len]; len++)
			return (1);
	}
	writeout = write(openfile, text_content, len);
		if (writeout == -1)
			return (-1);
	close(openfile);
	return (1);
}
