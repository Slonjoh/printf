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

	buffer *buf = buf_new();
	if (buf == NULL)
		return (-1);

	va_start(the_arguments, format);

	if (!format)
	{
		buf_end(buf);
		va_end(the_arguments);
		return (-1);
	}

	for (a = 0; format[a] != '\0'; a++)
	{
		buf_wr(buf);
		if (format[a] == '%')
		{
			a++;
			if (format[a] == 'c')
			{
				s = va_arg(the_arguments, int);
				buf->str[buf->index] = s;
				buf_inc(buf);
				count++;
			}
			else if (format[a] == 's')
			{
				char *str = va_arg(the_arguments, char *);
				if (str)
				{
					int len = 0;
					while (str[len] != '\0')
						len++;
					for (int i = 0; i < len; i++)
					{
						buf->str[buf->index] = str[i];
						buf_inc(buf);
					}
					count += len;
				}
			}
			else if (format[a] == '%')
			{
				buf->str[buf->index] = '%';
				buf_inc(buf);
				count++;
			}
		}
		else
		{
			buf->str[buf->index] = format[a];
			buf_inc(buf);
			count++;
		}
	}
	buf_write(buf);
	buf_end(buf);

	va_end(the_arguments);
	return (count);
}
