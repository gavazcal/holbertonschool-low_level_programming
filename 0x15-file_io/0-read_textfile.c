#include "holberton.h"
/**
 * read_textfile - reads a txt file and prints to POSIX output
 * @filename: the filename
 * @letters: number of letters to print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descript, reader, writer;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file_descript = open(filename, O_RDONLY, 600);
	if (file_descript == -1)
	{
		free(buffer);
		return (0);
	}
	reader = read(file_descript, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1)
	{
		free(buffer);
		return (0);
	}
	close(file_descript);
	return (writer);
}
