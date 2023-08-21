#include "main.h"

/**
 * print_hex - Prints the hexadecimal representation of an unsigned integer.
 * @n: Unsigned integer to be converted and printed.
 * @uppercase: The flag to print hexadecimal in uppercase (X) or lowercase (x).
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned int n, int uppercase)
{
	char buffer[20];
	int len;

	if (uppercase)
		sprintf(buffer, "%X", n);
	else
		sprintf(buffer, "%x", n);
	len = write(1, buffer, strlen(buffer));
	return (len);
}
