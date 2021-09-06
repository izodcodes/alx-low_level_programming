#include "main.h"

/**
 * puts2 - prints out every other character of a string
 * @str: a string
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
