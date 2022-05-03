#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: point
 * @text_content: pointer
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c = 0;
	char *s = text_content;

	if (filename == NULL)
	return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (*s != '\0')
		{
			c++;
			s++;
		}
		b = write(a, text_content, c);
		if (b == -1)
		return (-1);
	}
	close(a);
	return (1);
}
