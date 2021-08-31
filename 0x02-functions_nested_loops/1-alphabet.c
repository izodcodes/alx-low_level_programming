#include "main.h"
/**
 * print_alphabet - Print alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar ('\n');
}
