#include "main.h"

/**
 * _exit_prog - exit program with status code
 * @err_num: the error code
 * @err: the string to print
 * @fd_val: the file descriptor value
 *
 * Return: the error status code
 */

int _exit_prog(int err_num, char *err, int fd_val)
{
	switch (err_num)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err_num);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", err);
			exit(err_num);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", err);
			exit(err_num);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
			exit(err_num);
			break;
		default:
			return (0);
	}
}

/**
 * main - the entry point of my program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t rd_file, wr_file;
	char *buffer[1024];

	if (argc != 3)
		_exit_prog(97, NULL, 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		_exit_prog(98, argv[1], 0);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		_exit_prog(99, argv[2], 0);

	while ((rd_file = read(fd1, buffer, 1024)) != 0)
	{
		if (rd_file == -1)
			_exit_prog(98, argv[1], 0);

		wr_file = write(fd2, buffer, rd_file);
		if (wr_file == -1)
			_exit_prog(99, argv[2], 0);

	}

	close(fd2) == -1 ? (_exit_prog(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (_exit_prog(100, NULL, fd1)) : close(fd1);
	return (0);
}
