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
	write(1, &s, 1);
	return (1);
}
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
	char *s;
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
	else
	{
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
}
