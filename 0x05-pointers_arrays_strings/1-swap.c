#include "main.h"

/**
 * swap_int - swaps integers
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
