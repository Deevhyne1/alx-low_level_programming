#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: the value of the last digit
 * @n: the integer
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	_putchar(ld + '0');

	return (0);
}
