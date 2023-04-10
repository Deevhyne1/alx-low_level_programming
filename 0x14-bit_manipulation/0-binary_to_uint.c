#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary numbers
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int vap;
	unsigned int z = 0;

	if (!b)
		return (0);

	for (vap = 0; b[vap]; vap++)
	{
		if (b[vap] < '0' || b[vap] > '1')
			return (0);
		z = 2 * z + (b[vap] - '0');
	}

	return (z);
}
