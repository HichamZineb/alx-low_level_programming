#include "main.h"

void shutoff(int fd);
void shutoff(int fd);

/**
 * shutoff - Close file
 * @fd: File to close
 *
 * Return: Nothing
 */
void shutoff(int fd)

{
	int off;

	off = close(fd);

	if (off == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * buff_alloc - Allocate space for buffer
 * @fileto: File to copy text to
 *
 * Return: Buffer
 */
char *buff_alloc(char *fileto)

{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}
	return (buff);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])

{
	int filef, filet, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buff_alloc(argv[2]);
	filef = open(argv[1], O_RDONLY);
	rd = read(filef, buff, 1024);
	filet = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filef == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(filet, buff, rd);

		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(filef, buff, 1024);
		filet = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	shutoff(filef);
	shutoff(filet);

	return (0);
}
