#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- A function Read text file print
 * @filename: text fe
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 */

	ssize_t read_textfile(const char *filename, size_t letters)
	{
	char *buffer;
	ssize_t font;
	ssize_t write_;
	ssize_t tango;

	font = open(filename, O_RDONLY);
	if (font == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tango = read(font, buffer, letters);
	write_ = write(STDOUT_FILENO, buffer, tango);

	free(buffer);
	close(font);
	return (write_);
}
