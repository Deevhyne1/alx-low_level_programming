#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: the amount of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, v = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		c = x >> b;
		if (c & 1)
			v++;
	}

	return (v);
}
