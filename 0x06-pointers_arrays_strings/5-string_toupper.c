#include "main.h"
/**
 * string_toupper - function that changes all lowercase of a string
 * to uppercase
 * @n: pointer to the uppercase string
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;
/* i ;length_of_string */

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

