#include "variadic_functions.h"

/**
 * sum_them_all - Adds all parameters given
 * @n: integers to be summed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;
	int sum = 0;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg (numlist, int);
	}
	va_end (numlist);
	return(sum);
}
