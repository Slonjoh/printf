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
	int started = 0;
	int i;

	for (i = (sizeof(unsigned int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			write(1, "1", 1);
			count++;
			started = 1;
		}
		else if (started)
		{
			write(1, "0", 1);
			count++;
		}
	}
	if (!started)
	{
		write(1, "0", 1);
		count++;
	}

	return (count);
}

