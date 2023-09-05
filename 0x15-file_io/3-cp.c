#include "main.h"


char *create_buffer(char *file);

void close_file(int fd);


/**
 * create_buffer - This function allocates 1024 bytes for a buffer.
 * @file: the file buffer is storing characters
 *
 * Return: A pointer.
 */

char *create_buffer(char *file)
{
	char *buffer_erick;

	buffer_erick = malloc(sizeof(char) * 1024);

	if (buffer_erick == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_erick);
}

/**
 * close_file - This will Close the file descriptors.
 * @fd: This is the  file descriptor to be closed.
 */

	void close_file(int fd)
	{
		int e;

	e = close(fd);

	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This functiion Copies the contents of a file to another file.
 * @argc: The number of args
 * @argv: An array of ptr to args.
 *
 * Return: 0 when successful.
 *
 * If file_from does not exist or cannot be read - will exit code 98.
 * If file_to cannot be created or be written to - will exit code 99.
 * If file_to or file_from cannot close - will exit code 100.
 */

	int main(int argc, char *argv[])
	{
	int from34, to34, r34, w34;
	char *buffer_olando;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_olando = create_buffer(argv[2]);
	from34 = open(argv[1], O_RDONLY);
	r34 = read(from34, buffer_olando, 1024);
	to34 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from34 == -1 || r34 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer_olando);
			exit(98);
		}

		w34 = write(to34, buffer_olando, r34);
		if (to34 == -1 || w34 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer_olando);
			exit(99);
		}

		r34 = read(from34, buffer_olando, 1024);
		to34 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r34 > 0);

	free(buffer_olando);
	close_file(from34);
	close_file(to34);

	return (0);
}
