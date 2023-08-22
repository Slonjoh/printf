#include "main.h"
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
	int a = 0;

	va_start(the_arguments, format);
	while (format[a] != '\0')
	{
		if (format[a] != '%')
		{
			count += _putchar(format[a]);
		}
		else
		{
			a++;

			if (format[a] == 'c')
			{
				char c = va_arg(the_arguments, int);

				count += _putchar(c);
			}
			else if (format[a] == 's')
			{
				char *str = va_arg(the_arguments, char *);

				count += put_string(str);
			}
			else if (format[a] == '%')
			{
				count += _putchar('%');
			}
		}
		a++;
	}
	va_end(the_arguments);
	return (count);
}
