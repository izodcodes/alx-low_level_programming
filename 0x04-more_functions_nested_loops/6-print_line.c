#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int j = n;

	for (j = n; j > 0; j--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
