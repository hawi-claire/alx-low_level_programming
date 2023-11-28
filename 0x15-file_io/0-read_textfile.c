#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - This reads a text file and prints it
 * to the POSIX stdo
 * @filename: name of file to be read
 * @letters: number of letters it reads and prints
 * Return: number of lettes it reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int files_d;
	ssize_t lenr, lenw;
	charr *buff;

	if (filename --NULL)
		return (0);
	files_d = open(filename, 0 - RDONLY);
	if (files_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(files_d);
		return (0);
	}
	lenr = read(files_d, buff, letters);
	close(files_d);
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
