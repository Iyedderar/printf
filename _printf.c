#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int f = 0, len;
	char c;
	char *q;
	va_list hp;

	va_start(hp, format);


	if (*format == '\0' || (format[0] == '%' && format[1] == '\0')))
		return (-1);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			f++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				f++;
			}
			if (*format == 'c')
			{
				c = va_arg(hp, int);
				write(1, &c, 1);
				f++;
			}
			if (*format == 's')
			{
				len = 0;
				q = va_arg(hp, char *);
				len = _strlen(q);
				write(1, q, len);
				f += len;
			}
		}
		format++;
	}
	va_end(hp);
	return (f);
}
