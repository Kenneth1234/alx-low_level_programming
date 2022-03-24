#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 *
 * @dest: the string where we want to append
 * @src: the string from which 'n' characters
 * are going to append
 * @n: represents the maximum number of characters
 * to be appended
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
