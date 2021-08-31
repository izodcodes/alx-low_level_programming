#include "main.h"
/**
 *
 *print_alphabet_x10 - Prints the letters of alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;

	if (count < 10)
	{
		while (c <= 'z')
		{
			_putchar(c++);
		}
		count++;
	}
	_putchar('\n');
}
