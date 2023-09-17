#include "main.h"

/**
 * _printf - A function that selects the correct function to print.
 * @format: The format string.
 * @...: The rest of the arguments.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, len = 0;

	convert_match m[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_37},
		{"%d", printf_integer},
		{"%i", printf_integer},
	};

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == '%' && format[i + 1] == m[j].id[1])
			{
				len += m[j].f(args);
				i += 2;
				break;
			}
			j++;
		}

		if (j == 5)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}

	va_end(args);
	return (len);
}

