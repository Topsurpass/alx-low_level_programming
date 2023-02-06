#include "main.h"

/**
 * read_textfile - read a text file and print it to
 * the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters to print
 *
 * Return: the actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd_file, wr_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd_file = read(fd, buffer, letters);
	if (rd_file == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wr_file = write(STDOUT_FILENO, buffer, rd_file);
	if (wr_file == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);

	return (rd_file);
}
