#include "main.h"

/**
 * reverse - Reverses a string in-place.
 * @str: Input string.
 */

void reverse(char *str)
{
	if (str)
	{
		int len = strlen(str);
		int i, j;
		char temp;

		for (i = 0, j = len - 1; i < j; i++, j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
}
