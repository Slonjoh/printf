#include "main.h"

/**
 * print_strings - Handles the custom specifier %S for printing strings.
 * @str: String to be printed.
 *
 * Return: Number of characters printed.
 */

int print_strings(char *str)
{
	int count = 0;

	if (str)
	{
		int len;

		for (len = 0; str[len] != '\0'; len++)
		{
			if (str[len] < 32 || str[len] >= 127)
			{
				write(1, "\\x0", 3);
				count += 3;
				count += print_hex((unsigned char)str[len], 1);
			}
			else
			{
				write(1, &str[len], 1);
				count++;
			}
		}
	}
	return (count);
}
