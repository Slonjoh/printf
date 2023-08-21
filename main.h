#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * struct buffer - A buffer structure for handling formatted output.
 * @str: The buffer string.
 * @size: The size of the buffer.
 * @index: The current index within the buffer.
 * @overflow: The overflow count for the buffer.
 */
typedef struct buffer {
    char *str;
    size_t size;
    size_t index;
    int overflow;
} buffer;

/* Function prototypes */
buffer *buf_new(void);
void buf_wr(buffer *buf);
void buf_inc(buffer *buf);
void buf_write(buffer *buf);
void buf_end(buffer *buf);
int _printf(const char *format, ...);
int print_binary(unsigned int n);
int print_int(int n);
int _putchar(char c);

#endif /*MAIN_H*/
