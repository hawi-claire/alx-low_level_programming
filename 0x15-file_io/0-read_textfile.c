#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - This reads a text file and prints it
 * to the POSIX stdo
 * @filename: name of file to be read
 * @letters: number of letters it reads and prints
 * Return: number of lettes it reads and prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	char *buff;

	if (filename == NULL)
		return (0);

	f_descriptor = open(filename, 0_RDONLY);
	if (f_descriptor == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	lenr = read(files_d, buff, letters);
	close(files_d);
	if (lenr == -1)
	{
		free(buff);
		return (0);
	}
	lenm = write(STOUT_FILENO, buff, lenr);
	free(buff);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
