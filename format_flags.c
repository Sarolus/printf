#include "holberton.h"

/**
 *print_char - print a char
 *@c: char
 */

int print_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}

/**
 *print_str - print a string
 *@s: string
 */

int print_str(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);

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
 *
 *
 */

int print_percent(va_list p __attribute__((unused)))
{
	return (_putchar('%'));
}

/**
 *print_value - print value
 *@d: decimal
 */

int print_decimal(va_list d)
{
	return (print_number(d));;
}

/**
 *print_integer - print an integer
 *@i: integer
 */

int print_integer(va_list i)
{

	return (print_number(i));
}
