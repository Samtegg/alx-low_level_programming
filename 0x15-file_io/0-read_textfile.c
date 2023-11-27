#include "main.h"

/**
 * read_textfile - this function reads a text file and prints the letters
 * @filename: the filename.
 * @letters: the numbs of letters printed.
 *
 * Return: the numbs of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int dfd;
	ssize_t dnrd, dnwr;
	char *dbuf;

	if (!filename)
		return (0);

	dfd = open(filename, O_RDONLY);

	if (dfd == -1)
		return (0);

	dbuf = malloc(sizeof(char) * (letters));
	if (!dbuf)
		return (0);

	dnrd = read(dfd, dbuf, letters);
	dnwr = write(STDOUT_FILENO, dbuf, dnrd);

	close(dfd);

	free(dbuf);

	return (dnwr);
}
