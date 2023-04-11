#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int b, m = 0;
	unsigned long int v;

	for (b = 63; b >= 0; b--)
	{
		v = n >> b;

		if (v & 1)
		{
			_putchar('1');
			m++;
		}
		else if (m)
			_putchar('0');
	}
	if (!m)
		_putchar('0');
}

