#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list the_arguments;
    char buffer[BUFFER_SIZE];
    int count = 0;
    int buf_index = 0;
    int a;
    char s;

    va_start(the_arguments, format);

    if (format == NULL)
        return (-1);

    for (a = 0; format[a] != '\0'; a++)
    {
        if (format[a] != '%')
        {
            if (buf_index == BUFFER_SIZE - 1)
            {
                /* Buffer is full, flush it */
                write(1, buffer, buf_index);
                count += buf_index;
                buf_index = 0;
            }

            buffer[buf_index] = format[a];
            buf_index++;
            count++;
        }
        else
        {
            a++;
            if (format[a] == 'c')
            {
                s = va_arg(the_arguments, int);
                if (buf_index == BUFFER_SIZE - 1)
                {
                    write(1, buffer, buf_index);
                    count += buf_index;
                    buf_index = 0;
                }
                buffer[buf_index] = s;
                buf_index++;
                count++;
            }
            else if (format[a] == 's')
            {
                char *str = va_arg(the_arguments, char *);
                if (str != NULL)
                {
                    int len = 0;
		    int i;

                    while (str[len] != '\0')
                        len++;

                    if (buf_index + len > BUFFER_SIZE - 1)
                    {
                        write(1, buffer, buf_index);
                        count += buf_index;
                        buf_index = 0;
                    }

                    for (i = 0; i < len; i++)
                    {
                        buffer[buf_index] = str[i];
                        buf_index++;
                    }
                    count += len;
                }
            }
            else if (format[a] == '%')
            {
                if (buf_index == BUFFER_SIZE - 1)
                {
                    write(1, buffer, buf_index);
                    count += buf_index;
                    buf_index = 0;
                }

                buffer[buf_index] = '%';
                buf_index++;
                count++;
            }
            else
            {
                if (buf_index + 2 > BUFFER_SIZE - 1)
                {
                    write(1, buffer, buf_index);
                    count += buf_index;
                    buf_index = 0;
                }

                buffer[buf_index] = '%';
                buffer[buf_index + 1] = format[a];
                buf_index += 2;
                count += 2;
            }
        }
    }

    if (buf_index > 0)
    {
        write(1, buffer, buf_index);
        count += buf_index;
    }

    va_end(the_arguments);
    return (count);
}
