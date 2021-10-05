#include "variadic_functions.h"

/**
 * print_numbers - prints strings followed by a new line
 * @n: number of integers passed to the function
 * @separator: string printed between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numlist;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numlist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numlist);
}
