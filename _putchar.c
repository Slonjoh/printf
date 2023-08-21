#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: 1 on success, -1 on error.
 */

int _putch(char c)
{
	return (write(1, &c, 1));
}
