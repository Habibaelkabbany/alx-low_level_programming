#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file.
 * @letters: no. of letters printed.
 *
 * Return: numbers of letters printed. 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileOpenedd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fileOpenedd = open(filename, O_RDONLY);

	if (fileOpenedd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fileOpenedd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fileOpenedd);

	free(buffer);

	return (nwr);
}
