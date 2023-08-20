#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @n: The unsigned integer to be converted and printed.
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int n)
{
	int count = 0;
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		write(1, ((n & mask) != 0) ? "1" : "0", 1);
		count++;
		mask >>= 1;
	}

	return (count);
}

