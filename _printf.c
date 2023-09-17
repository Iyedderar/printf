#include "main.h"

/**
 * _printf - A function that selects the correct function to print.
 * @format: Identifier to look for.
 * Return: The length of the string.
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
here:
	va_end(args);
	return (len);
}

