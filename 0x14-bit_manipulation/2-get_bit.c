#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: the bit
 * Return: get_bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
	return (-1);
	get_bit = (n >> index) & 1;

	return (get_bit);
}
