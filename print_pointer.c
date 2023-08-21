#include "main.h"

/**
 * print_pointer - Handles the custom specifier %p for printing pointers.
 * @ptr: Pointer to be printed.
 *
 * Return: Number of characters printed.
 */

int print_pointer(void *ptr)
{
	unsigned long int value = (unsigned long int)ptr;
	int count = 0;

	write(1, "0x", 2);
	count += 2;
	count += print_hex(value, 1);
	return (count);
}

