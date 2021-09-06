#include "main.h"

/**
 * 1-swap - swaps integers
 * @a: pointer
 * @b: pointer
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
