#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to print
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 98 && <= 122) || (c >= 65 && <= 90))
		return (1);
	else
		return (0);
}
