#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++i)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
