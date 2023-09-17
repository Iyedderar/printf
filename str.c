#include "main.h"


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
