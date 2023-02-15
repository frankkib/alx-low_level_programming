#include "main.h"
#include <stdio.h>
/**
 * create_file - function that creates a file
 * @filename: this is a pointer to a file
 * @text_content: pointer to the text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openfile, writeout, length = 0;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (openfile == -1)
		return (-1);
	if (text_content == NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	writeout =  write(openfile, text_content, length);
	if (writeout != length)
		return (-1);
	close(openfile);
	return (1);
}
