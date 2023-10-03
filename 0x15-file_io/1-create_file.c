#include "main.h"


/**
 * create_file - This function  Creates a file.
 * @filename: file_name
 * @text_content: A pointer to a string
 *
 * Return: If the function fails - -1.
 */

	int create_file(const char *filename, char *text_content)
	{
	int font, write_, length_ = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length_ = 0; text_content[length_];)
			length_++;
	}

	font = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_ = write(font, text_content, length_);

	if (font == -1 || write_ == -1)
		return (-1);

	close(font);

	return (1);
}
