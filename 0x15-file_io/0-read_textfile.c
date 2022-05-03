#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file Requiescat
 * @letters: Size text to print
 * Return: read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int a, b, c;

	if (filename == NULL)
	return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		close(a);
		return (0);
	}
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	b = read(a, text, letters);
	if (b == -1)
	{
		free(text);
		close(a);
		return (0);
	}
	c = write(STDOUT_FILENO, text, b);
	if (c == -1)
	{
		free(text);
		close(a);
		return (0);
	}
	free(text);
	close(a);
	return (b);
}
