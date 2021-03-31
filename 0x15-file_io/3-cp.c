#include "holberton.h"
/**
 * main - copies a file to another
 * @argc: arg count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int reader, close_1, close_2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((reader = read(fd1, buff, 1024)) > 0)
	{
		if (fd2 == -1 || (write(fd2, buff, reader) != reader))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_1 = close(fd1);
	if (close_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	}
	close_2 = close(fd2);
	if (close_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
	}
	return (0);
}
