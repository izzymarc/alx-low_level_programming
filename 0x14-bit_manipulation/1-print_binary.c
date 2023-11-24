#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The decimal number to be converted and printed as binary.
 *
 * Description:
 * This function prints the binary representation of a given decimal
 * number 'n'. It calculates the number of bits required to represent 'n'
 * in binary and then iterates from the most significant bit to the least,
 * printing '1' or '0' for each bit. If 'n' is 0, it prints '0'.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_counter;
	int bit_position;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (bit_counter = n, bit_position = 0;
		(bit_counter >>= 1) > 0; bit_position++)
		;

	for (; bit_position >= 0; bit_position--)
	{
		if ((n >> bit_position) & 1)
			printf("1");
		else
			printf("0");
	}
}
