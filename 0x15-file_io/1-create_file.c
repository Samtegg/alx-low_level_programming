#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the filename.
 * @text_content: the content written in the file.
 *
 * Return: it returns 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int dfd;
	int dnletters;
	int drwr;

	if (!filename)
		return (-1);

	dfd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (dfd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (dnletters = 0; text_content[dnletters]; dnletters++)
		;

	drwr = write(dfd, text_content, dnletters);

	if (drwr == -1)
		return (-1);

	close(dfd);

	return (1);
}
