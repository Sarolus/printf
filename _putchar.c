#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - Write a string of str[] characters to stdout
 * @str: The string to print
 *
 * Return: return (null) if null, otherwise return the string.
 */
int _putstr(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
/**
 *print_rev - print a string in reverse
 *@s: string
 *Return: print the string in reverse to stdout
 */
int print_rev(char *s)
{
	int i, len;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
