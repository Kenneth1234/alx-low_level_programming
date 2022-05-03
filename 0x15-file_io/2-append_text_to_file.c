#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: point
 * @text_content: point
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL || *filename == '\0')
		return (-1);
	a = open(filename, O_RDWR | O_APPEND);

	if (a < 0)
	return (-1);

	if (text_content == NULL)
	{
		close(a);
		return (1);
	}

	b = write(a, text_content, strlen(text_content));
	if (b < 0)
	{
		close(a);
		return (-1);
	}
	close(a);
	return (1);
}
