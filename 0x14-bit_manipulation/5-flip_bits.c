#include "main.h"

/**
 * flip_bits - description
 * @n: int
 * @m: int
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n || m)
	{
		if (((n ^ m) & 1) == 1)
		count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
