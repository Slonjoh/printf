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
	if (!format)
		return (-1);
	while (format[a] != '\0')
	{
		if (format[a] != '%')
		{
			count += _putchar(format[a]);
		}
		else
		{
			format++;
			if (format[a] == '\0')
				break;
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
		format++;
	}
	va_end(the_arguments);
	return (count);
}
