#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file needed to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 0 if success. 1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int toOpen, toWrite, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	toOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	toWrite = write(toOpen, text_content, length);

	if (toOpen == -1 || toWrite == -1)
		return (-1);

	close(toOpen);

	return (1);
}
