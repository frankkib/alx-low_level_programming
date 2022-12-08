#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads the file from a descriptor
 * @filename: pointer to the file
 * @letters: size of the file
 * Return: ails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, file, letters);
	if (rd == -1)
		return (0);
	file[letters] = '\0';
	wr = write(STDOUT_FILENO, file, rd);
	if (wr == -1)
		return (0);
	close(fd);
	free(file);
	return (wr);
}
