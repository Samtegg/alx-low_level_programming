#include "main.h"
#include <stdio.h>

/**
 * error_file - this function checks if files can be opened.
 * @file_from: the file_from.
 * @file_to: the file_to.
 * @argv: the arguments vector.
 * Return: the no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - this function check the code for Holberton School students.
 * @argc: the num of arguments.
 * @argv: the arguments vector.
 * Return: it returns Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t dnchars, dnwr;
	char dbuf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	dnchars = 1024;
	while (dnchars == 1024)
	{
		dnchars = read(file_from, dbuf, 1024);
		if (dnchars == -1)
			error_file(-1, 0, argv);
		dnwr = write(file_to, dbuf, dnchars);
		if (dnwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
