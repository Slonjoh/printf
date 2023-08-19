# _Printf() Function
This project is a collaboration between Oluwatobiloba Ojo and Chinenye Onyema August 18, 2023.
The `_printf()` function is a custom implementation that emulates the functionality of the standard `printf()` function in the C programming language.
It provides basic features and functions similar to those found in the manual 3 of the `printf` command.
## Introduction

The `_printf()` function performs formatted output conversion and prints data. Its prototype is as follows:

```c
int _printf(const char *format, ...);
```
## Format Tags
The format tags follow this prototype
%[flags][length]specifier
Key identifiers include:

    %c: Character printing
    %s: String printing
    %i or %d: Integer printing
    %b: Binary conversion and printing
    %o: Octal conversion and printing
    %x: Hexadecimal conversion and printing
    %X: Uppercase hexadecimal conversion and printing
    %S: String printing with support for non-printable characters
    %u: Unsigned integer printing
    %r: String printing in reverse
    %R: String printing in ROT13
    %p: Printing memory addresses.


## Installation and Usage
1. Compile the project using:

$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

Run the compiled executable:
$ ./printf

## File Functions

## _printf.c
Prints any string according to format

## Authors
Oluwatobiloba Ojo and Chinenye Onyema

