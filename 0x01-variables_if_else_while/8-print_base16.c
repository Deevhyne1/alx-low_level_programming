#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	purtchar(d);

	for (low = 'a'; low <= 'f'; low++)
	purchar(low);
	purchar('\n');

	return (0);
}
