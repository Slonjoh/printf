#include "main.h"

/**
 * put_string - a function that prints a string
 * @str: a string
 * Return: number of strings
 */

int put_string(char *str)
{
	int i, lens = 0;

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
			_putchar(str[i]);
		return (6);
	}
	while (str[lens] != '\0')
	{
		_putchar(str[lens]);
		lens++;
	}
	return (lens + 1);
}
