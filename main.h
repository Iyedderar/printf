#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

int printf_char(char s);
int printf_string(char *s);

int _printf(const char *format, ...);

int _strlen(char *s);
#endif
