#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;
int print_int(va_list val);

int printf_d(va_list val);
int _strlen(char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_binary(va_list val);
#endif
