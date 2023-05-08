#include "main.h"

/**
 * read_textfile - Reads text file and prints to POSIX standard output:wq
 * @filename: pointer to the text file
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t file;
	ssize_t rd;
	ssize_t wr;
	char *buff;

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	rd = read(file, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(file);
	return (wr);
}
