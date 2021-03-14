#include "holberton.h"

/**
 *
 *
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
}

/**
 *
 *
 */

int print_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
