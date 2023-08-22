#include "main.h"

/**
 * print_strings - Handles the custom specifier %S for printing strings.
 * @str: String to be printed.
 *
 * Return: Number of characters printed.
 */

int print_strings(char *str)
{
	int len = 0;
	if (str)
	{
		while (str[len] != '\0')
		{
			if (str[len] >= 32 && str[len] < 127)
			{
				write(1, &str[len], 1);
			}
			else
				printf("\\x%02X", (unsigned char)str[len]);
		}
		len++;
	}

return (len);
}
