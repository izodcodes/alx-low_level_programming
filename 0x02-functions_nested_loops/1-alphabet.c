#include "main.h"
/**
 * main - Print alphabets
 *
 * Return: Always 0.
 */

int main (void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar ('\n');
}
