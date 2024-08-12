#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename
 * @text_content: content in the file
 * Return: 1 if success , -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	f_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(f_descriptor, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(f_descriptor);

	return (-1);
}
