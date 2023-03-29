#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: points to first string
 * @s2: points to second string
 *
 * Return: value less than 0 if string is less than,
 * value greater than 0 if string is greater than
 * other& 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;
/* i ; counter to compare the value */

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
