#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{

	va_list the_arguments;
	int count = 0;
	int a;
	char s;

	va_start(the_arguments, format);

	if (!format)
		return (-1);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			write(1, &format[a], 1);
			count++;
		}
		else
		{
			a++;
			if (format[a] == 'c')
			{
				s = va_arg(the_arguments, int);
				write(1, &s, 1);
				count++;
			}
			else if (format[a] == 's')
			{
				char *str = va_arg(the_arguments, char *);
				if (str)
				{
					while (str[len] != '\0')
					{
						len++;
						write(1, str, len);
						count += len;
					}
				}
			}
			else if (format[a] == '%')
			{
				write(1, &format[a], 1);
				count++;
			}
		}
	}

	va_end(the_arguments);
	return (count);
}
