#include "main.h"

/**
 * print_int - Prints the representation of an integer.
 * @n: Integer to be converted and printed.
 *
 * Return: Number of characters printed.
 */

int print_int(int n)
{
	char buffer[20];
	int len;

	len = sprintf(buffer, "%d", n);
	write(1, buffer, len);
	return (len);
}

