#include "main.h"

/**
 * _plus_flag - a function that handle the '+' plus flag
 * @n: The plus flag character
 * Return: count
 */

int _plus_flag(int n)
{
	int count = 0;

	if (n >= 0)
	{
		count += sprintf(buffer,  "+");
		write(1, buffer, count);
	}
	return (count);
}

/**
 * _space_flag - a function that handle the ' ' space flag
 * @n: The plus flag character
 * Return: count
 */

int _space_flag(int n)
{
	int count = 0;

	if (n >= 0)
	{
		count += sprintf(buffer, " ");
		write(1, buffer, count);
	}
	return (count);
}

/**
 * _hash_flag - a function that handle the'#' hash flag
 * @n: The plus flag character
 * Return: count
 */

int _hash_flag(char c)
{
	int count = 0;

	if (c == 'x')
	{
		count += sprintf(buffer, "0x");
		write(1, buffer, count);
	}
	else if (c == 'X')
	{
		count += sprintf(buffer, "0X");
		write(1, buffer, count);
	}

	return (count);
}
