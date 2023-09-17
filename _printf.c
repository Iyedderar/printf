#include "main.h"




/**
 *_printf - Function to Print formatted output.
 * @format: String to be printed.
 * @...: The rest of the arguments
 *
 * Return: The number of chars printed.
 */
int _printf(const char *format, ...)
{
	int f = 0;
	va_list hp;

	va_start(hp, format);
	if (*format == '\0' || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (*format == '\0')
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
				f += printf_char(hp);
			}
			if (*format == 's')
			{
				f += printf_string(hp);
			}
		}
		format++;
	}
	va_end(hp);
	return (f);
}
