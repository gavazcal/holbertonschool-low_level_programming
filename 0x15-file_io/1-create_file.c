#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: the content
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int file_descript, writer, str_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descript = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file_descript == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[str_len])
		{
			str_len++;
		}
		writer = write(file_descript, text_content, str_len);
		if (writer == -1)
		{
			return (-1);
		}
	}
	close(file_descript);
	return (1);
}
