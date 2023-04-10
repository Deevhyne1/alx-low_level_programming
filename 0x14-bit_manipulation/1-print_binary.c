#include "main.h"

/**
 * print_binary - prints the binary representation of a integar
 * @n: integar to print in binary
 */
void print_binary(unsigned long int n)
{
	int b, v = 0;
	unsigned long int m;

	for (b = 63; b >= 0; b--)
	{
	m = n >> b;

	if (m & 1)
	{
	_putchar('1');
	v++;
	}
	else if (v)
	_putchar('0');
	}
	if (!v)
	_putchar('0');
}
