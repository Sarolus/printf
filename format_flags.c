#include "holberton.h"

/**
 *print_char - print a char
 *@c: char
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (0);
}

/**
 *print_str - print a string
 *@s: string
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
	return (0);
}

/**
 *
 *
 */

int print_percent(va_list p __attribute__((unused)))
{
	_putchar('%');
	return (0);
}

/**
 *print_value - print value
 *@d: decimal
 */

int print_decimal(va_list d)
{
	int result;
	result = print_number(d);

	return (result);
}

/**
 *print_integer - print an integer
 *@i: integer
 */

int print_integer(va_list i)
{
	int result;
	result = print_number(i);

	return (result);
}
