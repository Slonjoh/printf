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
	int count = 0, a = 0;

	if (!format)
		return (-1);
	va_start(the_arguments, format);
	while (format[a] != '\0')
	{
		if (format[a] == '%' && format[a + 1] == '\0')
			return (-1);
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(the_arguments, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			int scount = 0;

			scount = put_string(va_arg(the_arguments, char *));
			a++;
			count += scount;
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			count++;
		}
		a++;
	}
	va_end(the_arguments);
	return (count);
}
