#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *m, *b = "", *v, *c = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", c, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(list, double));
					break;
				case 's':
					m = va_arg(list, char *);
					if (!m)
						m = "(nil)";
					printf("%s%s", b, m);
					break;
				default:
					i++;
					continue;
			}
			b = ", ";
			c = "";
			v = "";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

