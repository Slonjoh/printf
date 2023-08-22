#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("%s\n", "test");
    len2 = printf("%s\n", "test");
    printf("Length:[%d, %d\n", len, len2);
    printf("%5c\n", 'g');
    printf("%-5c\n", 'g');
    printf("%4f\n", 2.1);
    printf("%1.4f\n", 2.1);
    printf("%4.2f\n", 2.1);
    return (0);
}
