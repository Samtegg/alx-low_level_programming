#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: the filename.
 * @text_content: the added content.
 *
 * Return: it returns 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dfd;
	int dnletters;
	int drwr;

	if (!filename)
		return (-1);

	dfd = open(filename, O_WRONLY | O_APPEND);

	if (dfd == -1)
		return (-1);

	if (text_content)
	{
		for (dnletters = 0; text_content[dnletters]; dnletters++)
			;

		drwr = write(dfd, text_content, dnletters);

		if (drwr == -1)
			return (-1);
	}

	close(dfd);

	return (1);
}
