#include "main.h"


/**
 * create_file - This function will Create a file.
 * @filename: This is a pointer to the name of the file to create.
 * @text_content:This is a ptr to a string to write to the file.
 * Return: If the function fails will return - -1.
 * Otherwise - 1.
 */

	int create_file(const char *filename, char *text_content)
	{
		int file, write1, length = 0;

		if (filename == NULL)
		return (-1);

		if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

		file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		write1 = write(file, text_content, length);

		if (file == -1 || write1 == -1)
			return (-1);

		close(file);

		return (1);
	}
