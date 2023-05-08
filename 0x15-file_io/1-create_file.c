#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: Pointer to NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)

{
	int file;
	int wr;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, i);

	if (!file || !wr)
		return (-1);

	close(file);
	return (1);
}
