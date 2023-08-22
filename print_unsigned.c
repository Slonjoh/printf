#include "main.h"

/**
 * print_unsigned - Prints the decimal representation of an unsigned integer.
 * @n: Unsigned integer to be converted and printed.
 *
 * Return: Number of characters printed.
 */

int print_unsigned(unsigned int n)
{
	int len;
	char buffer[20];

	len = sprintf(buffer, "%u", n);
	write(1, buffer, len);
	return (len);
}
