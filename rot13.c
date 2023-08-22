#include "main.h"

/**
 * rot13 - Applies the rot13 transformation to a string.
 * @str: Input string.
 *
 * Return: Pointer to the transformed string.
 */
char *rot13(char *str)
{
       	if (str)
	{
		char *result = str;

		while (*result)
		{
			if ((*result >= 'A' && *result <= 'Z') || (*result >= 'a' && *result <= 'z'))
			{
				char base;
				base = (*result >= 'a') ? 'a' : 'A';
				*result = ((*result - base + 13) % 26) + base;
			}
			result++;
		}
	}
	return (str);
}
