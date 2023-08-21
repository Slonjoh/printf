#include "main.h"

/**
 * print_pointer - Prints a pointer value.
 * @ptr: Pointer to be printed.
 *
 * Return: Number of characters printed.
 */

int print_pointer(void *ptr)
{
	if (ptr == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	else
	{
		int len = 0;
		char buffer[20];

		len += snprintf(buffer, sizeof(buffer), "%p", ptr);
		return (write(1, buffer, len));
    }
}
