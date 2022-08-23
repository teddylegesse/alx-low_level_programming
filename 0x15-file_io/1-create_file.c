#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer for the file name
 * @text_content: pointer strings write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
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

	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (_open == -1)
		return (-1);
	_write = write(_open, text_content, count);
	if (_write == -1)
		return (-1);
	close(_open);
	return (1);
}
