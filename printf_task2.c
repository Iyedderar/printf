#include "main.h"

/**
 * printf_integer - prints an integer.
 * @val: arguments.
 * Return: the number of digits printed.
 */
int printf_integer(va_list val)
{
	int n = va_arg(val, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		int digit = n % 10;

		_putchar(digit + '0');
		n /= 10;
		count++;
	}

	return (count);
}

