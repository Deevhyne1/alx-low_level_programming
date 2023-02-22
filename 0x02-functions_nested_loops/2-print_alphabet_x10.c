#include "main.h"

/**
 * print_alphabet_x10 - prints
 */

void print_alphabet_x10(void)
{
	int ten;
	char letters;

	for (ten = 0; ten <= 9; ten++)
	{
	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n')
	}
}
