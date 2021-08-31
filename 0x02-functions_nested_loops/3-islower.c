#include "main.h"
/**
 * 3-islower - checks for lowercase character
 *
 * Returns: 1 if c is lowercase, otherwise 0
 */

int_islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	else
		return (0);
	_putchar('\n');
}
