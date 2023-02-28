#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: First Entry
 * @b: Second Entry
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;

	*a = *b;

	*b = changed;
}
