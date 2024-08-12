#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

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
	ssize_t lenr, lenw;

	if (filename == NULL)
		return (0);

	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	lenr = read(f_descriptor, buff, letters);
	close(f_descriptor);
	if (lenr == -1)
	{
		free(buff);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
