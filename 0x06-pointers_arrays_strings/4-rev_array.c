#include "main.h"
/**
 * reverse_array - function that reverses array of integers
 *
 * @a: pointer to array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

/* t ;temporary variable, i ;counter */

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

