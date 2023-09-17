#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * printf_integer - print an integer.
 * @val: argument.
 * Return: the number of digits printed.
 */
int printf_integer(va_list val)
{
	int n = va_arg(val, int);
	int len = 0;
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
		n = -n;
		len++;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	len += print_digits(n);
	return (len);
}

/**
 * print_digits - helper function to print digits.
 * @n: integer to print.
 * Return: the number of digits printed.
 */
int print_digits(int n)
{
	int len = 0;

	if (n == 0)
		return (0);

	len += print_digits(n / 10);
	_putchar((n % 10) + '0');
	return (len + 1);
}

