#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x;
	long int y;

	y = 612852475143;
	x = 2;

	while (x < y)
	{
		if (y % x == 0)
		{
			y /= x;
			x = 2;
		}
		else
			x++;
	}
	printf("%ld\n", x);
	return (0);
}
