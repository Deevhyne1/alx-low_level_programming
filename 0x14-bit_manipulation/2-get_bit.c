#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int m;

	if (index > 63)
	return (-1);

	m = (n >> index) & 1;
	return (m);
}
