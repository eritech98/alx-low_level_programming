#include "main.h"


/**
 * append_text_to_file - A function that  Appends text at the end of a file.
 * @filename: A pointer to the n
 * @text_content:str to add to the end of the file.
 *
 * Return: If the function fails OR filename is NULL - -1.
 */

	int append_text_to_file(const char *filename, char *text_content)
	{
	int opiyo, write_, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opiyo = open(filename, O_WRONLY | O_APPEND);
	write_ = write(opiyo, text_content, length);

	if (opiyo == -1 || write_ == -1)
		return (-1);

	close(opiyo);

	return (1);
}
