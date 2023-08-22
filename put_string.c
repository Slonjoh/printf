#include "main.h"

/**
 * put_string - a function that prints a string
 * @str: a string
 * Return: number of strings
 */

int put_string(char *str)
{
	int lens = 0;

	while (str[lens] != '\0')
	{
		_putchar(str[lens]);
		lens++;
	}
	return (lens);
}
