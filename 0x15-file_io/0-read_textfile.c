#include "main.h"

/**
 * read_textfile - reads text file
 * @filename: the name of the file to be read
 * @letters: number of letters to read
 * Return: actual number it could read
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nrd, nwr;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);
		return (nwr);
}
