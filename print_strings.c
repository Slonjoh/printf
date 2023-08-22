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
		char buffer[5];

		for (len = 0; str[len] != '\0'; len++)
		{
			if (str[len] == '\n')
			{
				buffer[0] = '\\';
				buffer[1] = 'x';
				buffer[2] = '0';
				buffer[3] = 'A';
				write(1, buffer, 4);
				count += 4;
			}
			else if (str[len] < 32 || str[len] >= 127)
			{
				buffer[0] = '\\';
				buffer[1] = 'x';
				count += 2;
				count += print_hex((unsigned char)str[len], 1, buffer + 2);
				write(1, buffer, count);
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

