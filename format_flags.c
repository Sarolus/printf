#include "holberton.h"

void print_char(va_list c)
{
	_putchar(va_arg(c, int));
}

void print_str(va_list s)
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
