#include "main.h"
/**
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _write, _read;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
		return (0);

	_open = open(filename, O_RDONLY);

	if (_open == -1)
	{
		free(ptr);
		return (0);
	}

	_read = read(_open, ptr, letters);

	if (_read == -1)
	{
		free(ptr);
		return (0);
	}

	_write = write(STDOUT_FILENO, ptr, _read);
	
	if (_write == -1)
	{
		free(ptr);
		return (0);
	
	}

	free(ptr);
	close(_open);
	return (_write);



}
