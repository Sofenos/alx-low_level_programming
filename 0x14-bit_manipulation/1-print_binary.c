#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n & mask) == 0)
	{
		mask >>= 1;
	}

	for (i = 0; mask != 0; i++)
	{
		if ((n & mask) == mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

