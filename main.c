#include "main.h"
#include "print_strings.c"
#include "print_hex.c"
#include "_printf.c"
#include <stdio.h>
#include "print_int.c"
#include "print_octal.c"
#include "print_unsigned.c"
#include "print_binary.c"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
