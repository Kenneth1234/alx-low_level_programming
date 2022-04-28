#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b:Pointing to a string of 0 and 1 chars.
 * Return:  the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (b == 0)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		a = a << 1;
		if (*b == '1')
			a = a ^ 1;
		b++;
	}
	return (a);
}
