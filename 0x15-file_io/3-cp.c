#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);

char *create_buffer(char *file);


/**
 * create_buffer - This function Allocates 1024 bytes for a buffer.
 * @file: The  buffer is storing chars for.
 *
 * Return: A pointer to newly-allocated buf
 */

	char *create_buffer(char *file)
	{
	char *buffer_1;

	buffer_1 = malloc(sizeof(char) * 1024);

	if (buffer_1 == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_1);
}


/**
 * close_file - Closes file descript
 * @fd: The file descriptor to be
 */
	void close_file(int fd)
	{
	int t;

	t = close(fd);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	}


/**
 * main - Copies the contents of a file to ant file
 * @argc: The number of args supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * If file_from does not exist or cannot be read - exit code 98-
 * If file_to cannot be created or written to - exit code 99-
 * If file_to or file_from cannot be closed - exit code 100_
 */

	int main(int argc, char *argv[])
	{
	int from_, to_, read_, write_;
	char *buffer_1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_1 = create_buffer(argv[2]);
	from_ = open(argv[1], O_RDONLY);
	read_ = read(from_, buffer_1, 1024);
	to_ = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_ == -1 || read_ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer_1);
			exit(98);
		}

		write_ = write(to_, buffer_1, read_);
		if (to_ == -1 || write_ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer_1);
			exit(99);
		}

		read_ = read(from_, buffer_1, 1024);
		to_ = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_ > 0);

	free(buffer_1);
	close_file(from_);
	close_file(to_);

	return (0);
}
