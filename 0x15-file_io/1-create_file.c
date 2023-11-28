#include "main.h"

/**
* create_file - This creates a file
* @filename: this is the filename.
* @text_content: the content written in the file.
*
* Return: 1 if it succeeds. -1 if it fails.
*/
int create_file(const char *filename, char *text_content)
{
	int count;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	count = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (count == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(count, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(count);

	return (1);
}
