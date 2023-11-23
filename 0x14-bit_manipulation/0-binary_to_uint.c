#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Description: Converts a binary number, represented as a string of '0' and
 * '1' characters, to an unsigned integer. It iterates over each character
 * of the string, calculating the binary number's decimal value.
 *
 * Return: The decimal value of the binary number as an unsigned int. If the
 * string contains characters other than '0' or '1', or if it is NULL, the
 * function returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
