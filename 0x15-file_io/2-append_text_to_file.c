#include "main.h"


/**
 * append_text_to_file - This func appends text at the end of a file.
 * @filename: This is aptr to the name of file
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         Otherwise - 1.
 */

	int append_text_to_file(const char *filename, char *text_content)
	{
		int output, write1, length = 0;

		if (filename == NULL)
		return (-1);

		if (text_content != NULL)
		{
			for (length = 0; text_content[length];)
			length++;
		}

		output = open(filename, O_WRONLY | O_APPEND);
		write1 = write(output, text_content, length);

		if (output == -1 || write1 == -1)
		return (-1);

		close(output);

		return (1);
}
