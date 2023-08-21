#include "main.h"
#include <stdlib.h>
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

	if (format == NULL)
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
			if (format[a] == '\0')
				break;

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
                                        int len = 0;
                                        while (str[len] != '\0')
                                                len++;
                                        write(1, str, len);
                                        count += len;
                                }
                        }
			else if (format[a] == 'b')
			{
				unsigned int value = va_arg(the_arguments, unsigned int);
				count += print_binary(value);
			}
			else if (format[a] == 'd' || format[a] == 'i')
			{
				int value = va_arg(the_arguments, int);
				count += print_int(value);
			}
                        else if (format[a] == '%')
                        {
                                write(1, &format[a], 1);
                                count++;
                        }
                        else
                        {
                                write(1, "%", 1);
                                write(1, &format[a], 1);
                                count += 2;
                        }
                }
        }


	va_end(the_arguments);
	return (count);
}
