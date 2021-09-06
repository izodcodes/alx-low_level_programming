#include "main.h"

/**
 * _strlen - prints out the length os a string
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
