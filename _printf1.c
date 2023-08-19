#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing directives.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, a, num;
	char c, *str;

	va_start(args, format);

	if (!format)
		return (-1);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			count += _putchar(format[a]);
		else
		{
			a++;
			count += format_handler(format[a], args, &num, &c, &str);
		}
	}

	va_end(args);
	return (count);
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 * Return: On success, the character is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * format_handler - Handles format specifiers.
 * @specifier: The format specifier character.
 * @args: The va_list of arguments.
 * @num: A pointer to an integer for d and i specifiers.
 * @c: A pointer to a character for c specifiers.
 * @str: A pointer to a string for s specifiers.
 * Return: The number of characters printed.
 */
int format_handler(char specifier, va_list args, int *num, char *c, char **str)
{
	if (specifier == 'c')
	{
		*c = va_arg(args, int);
		return (_putchar(*c));
	}
	else if (specifier == 's')
	{
		*str = va_arg(args, char *);
		if (!*str)
			*str = "(null)";
		return (write_str(*str));
	}
	else if (specifier == 'd' || specifier == 'i')
	{
		*num = va_arg(args, int);
		if (*num < 0)
		{
			_putchar('-');
			*num = -*num;
		}
		return (print_number(*num));
	}
	else
	{
		_putchar('%');
		_putchar(specifier);
		return (2);
	}
}

/**
 * write_str - Writes a string to stdout.
 * @str: The string to be written.
 * Return: The number of characters written.
 */
int write_str(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (write(1, str, len));
}
