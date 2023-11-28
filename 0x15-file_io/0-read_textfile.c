#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints the letters
 * @filename: The filename.
 * @letters: The numbers of letters printed.
 *
 * Return: The numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	count = open(filename, O_RDONLY);

	if (count == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(count, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(count);

	free(buf);

	return (nwr);
}
