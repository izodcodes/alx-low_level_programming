#include "main.h"
/**
 *
 *print_alphabet_x10 - Prints the letters of alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
			_putchar('\n');
		}
		count++;
	}
}
