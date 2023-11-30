#include "main.h"
#include <stdio.h>
/**
 * error_file - check if a file is opened and handle errors
 * @file_from: initialfile to copy from and check
 * @file_to: destination file
 * Return: none
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
		dprintf(STDERR_FILENO, "Error: Can't write to file NAME_OF_THE_FILE");
	}
}
