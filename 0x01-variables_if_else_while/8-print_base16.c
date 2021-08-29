#include <stdio.h>
#include <stdlib.h>

/**
 *Print hexadecimal digits
 *
 *Return: Always 0
 */
int main (void)
{
	int n = '0';
	int alpha = 'a';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}

	while (alpha <= 'f')
	{
		putchar (alpha);
		alpha++;
	}

	putchar ('\n');

	return (0);
}
