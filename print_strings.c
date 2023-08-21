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
			if (str[len] == '\n')
			{
				write(1, "\\x0A", 4);
				count += 4;
			}
			else if (str[len] < 32 || str[len] >= 127)
			{
				write(1, "\\x", 2);
				count += 2;
				printf("%02X", (unsigned char)str[len]);
				count += 2;
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
