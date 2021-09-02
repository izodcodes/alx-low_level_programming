#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*while loop doesn't increment*/
	while (i > 10)
	{
		putchar(i);
	}
	/*increment expected*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
