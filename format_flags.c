#include "holberton.h"

/**
 *print_char - print a char
 *@c: char
 */

void print_char(va_list c)
{
	_putchar(va_arg(c, int));
}

/**
 *print_str - print a string
 *@s: string
 */

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

/**
 *print_value - print value
 *@d: decimal
 */
void print_value(va_list d)
{
//value de 1 a 10
}

/**
 *print_integer - print an integer
 *@i: integer
 */
void print_integer(va_list i)
{

}
