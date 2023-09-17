#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int printf_char(va_list val);
int printf_string(va_list val);
#endif
