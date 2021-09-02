#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *@size: size of the square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int h;
	int w;
	int s = size;

	for (h = 1; h <= s; h++)
	{
		for (w = 1; w <= s; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
