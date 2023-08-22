#include "main.h"

/**
 * print_octal - Prints the octal representation of an unsigned integer.
 * @n: Unsigned integer to be converted and printed.
 *
 * Return: Number of characters printed.
 */

int print_octal(unsigned int n)
{
	int len;
	char buffer[20];

	len = sprintf(buffer, "%o", n);
	write(1, buffer, len);
	return (len);
}
