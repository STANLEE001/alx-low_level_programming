#include "main.h"

/**
 * swap_int - function that swaps the value of two integers.
 * @a: this is the first entry
 * @b:this is the second entry
 *
 *
 */
void swaps_int(int *a, int *b)
{
	int changed;

	changed =*a;
	*a =*b;
	*b =changed;
}
