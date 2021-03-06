#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: size of the triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int s = size;
	int l;
	int b;

	if (s > 0)
	{
		for (l = 1; l <= s; l++)
		{
			for (b = l; b <= (s - 1); b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= l; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
