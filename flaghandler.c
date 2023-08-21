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
		write(1, "+", 1);
		count++;
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
		write (1, " ", 1);
		count++;
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
		write(1, "0X", 2);
	else if (c == 'X')
		write(1, "0X", 2);
	count += 2;

	return (count);
}
