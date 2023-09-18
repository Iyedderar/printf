#include "main.h"

/**
 * print_int - is a function that prints integers.
 * @val: the argument.
 * Return: the nbr of chars printed.
 */

int print_int(va_list val)
{
	int num, len, i;
	char *charsnum;

	num = va_arg(val, int);
	charsnum = _itoa(num, 10);
	len = _strlen(charsnum);
	for (i = 0; charsnum[i] != '\0'; ++i)
		_putchar(charsnum[i]);
	return (len);
}
/**
 * _itoa - converts int to a string.
 * @num: number to convert.
 * @base: base to be coverted from
 * Return: pointer to first char.
 */

char *_itoa(int num, int base)
{
	char *res;
	char buffer[50];
	char sign = 0;

	if (num == 0)
		return ("0\0");

	if (num < 0)
	{
		sign = '-';
		num = -num;
	}
	res = &buffer[49];
	*res = '\0';
	while (num != 0)
	{
		*(--res) = ((num % base) > 9) ? ((num % base) - 10) + 'a'
		: (num % base) + '0';
		num = num / base;
	}

	if (sign)
	{
		*(--res) = '-';
	}
	return (res);
}
