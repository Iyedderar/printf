#include "main.h"

/**
 * printf_int - Print an integer.
 * @val: Argument.
 *
 * Return: The number of characters printed.
 */
int printf_int(va_list val)
{
	int num = va_arg(val, int);
	int num_chars = 0;

	num_chars += print_number(num);

	return (num_chars);
}

/**
 * print_number - Print a number.
 * @n: Number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	unsigned int num;
	int num_chars = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		num_chars++;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0)
	{
		num_chars += print_number(num / 10);
	}

	_putchar('0' + num % 10);
	num_chars++;

	return (num_chars);
}

