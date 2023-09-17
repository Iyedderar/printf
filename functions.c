#include "main.h"

/**
 * printf_char - prints a char.
 * @s: arguments.
 * Return: 1.
 */

int printf_char(char s)
{
	write(1, &s, 1);
	return (1);
}
/**
 * printf_string - print a string.
 * @s: argumen t.
 * Return: the length of the string.
 */
int printf_string(char *s)
{
	int len;

		len = _strlen(s);
		write(1, s, len);
		return (len);
}
