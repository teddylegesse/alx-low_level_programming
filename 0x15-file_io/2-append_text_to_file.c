#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer name of the file
 * @text_content: the string to add end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write;
	int count;

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	if (filename == NULL)
		return (-1);
	_open = open(filename, O_WRONLY | O_APPEND);
	if (_open == -1)
		return (-1);
	_write = write(_open, text_content, count);
	if (_write == -1)
		return (-1);
	close(_open);
	return (1);
}

