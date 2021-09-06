#include "main.h"

/**
 * puts2 - prints out every other character of a string
 * @str: a string
 * Return: null
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (str[count] % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;

	}
}
