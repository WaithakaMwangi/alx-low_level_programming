#include "main.h"

/**
 * swap_int - takes in two variable integers and
 * swaps the values of two integers
 * @a: swaps and stores integer of b
 * @b: swaps and stores integer of a
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
