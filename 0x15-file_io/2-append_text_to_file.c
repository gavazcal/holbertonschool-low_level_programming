#include "holberton.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: the filename
 * @text_content: the content
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descript, writer, str_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descript = open(filename, O_WRONLY | O_APPEND);
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
