#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @seprator: separator to print between the strings
 * @n; number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list charlist;

	va_start(charlist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(charlist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(charlist);
}
