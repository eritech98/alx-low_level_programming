#include "main.h"

/**
 * read_textfile- s function will Read text file to STDOUT.
 * @filename: This is the text file to be read
 * @letters: This are the number of letters to be read
 * Return: 0 when function fails or filename is NULL.
 */

	ssize_t read_textfile(const char *filename, size_t letters)
	{
		char *buffer;
		ssize_t file;
		ssize_t write1;
		ssize_t erick;

		file = open(filename, O_RDONLY);
		if (file == -1)
		return (0);

		buffer = malloc(sizeof(char) * letters);
		erick = read(file, buffer, letters);
		write1 = write(STDOUT_FILENO, buffer, erick);

		free(buffer);
		close(file);

		return (write1);
	}
