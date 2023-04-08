#include "main.h"

/**
 * _strlen - get the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(str + i));
}
/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 (success), -1 (failed)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrt_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wrt_file = write(fd, text_content, _strlen(text_content));

	if (wrt_file == -1 || wrt_file != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
