#include "holberton.h"

/**
 *print_char - print a char
 *@c: char
 *Return: value of _putchar
 */

int print_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}

/**
 *print_str - print a string
 *@s: string
 *Return: i the nbr of char print
 */

int print_str(va_list s)
{
	return (_putstr(va_arg(s, char *)));
}

/**
 *print_percent - print the char %
 *@p: char
 *Return: char % -> 1
 */

int print_percent(va_list p __attribute__((unused)))
{
	return (_putchar('%'));
}

/**
 *print_decimal - print a decimal
 *@d: decimal
 *Return: value of print_number(d)
 */

int print_decimal(va_list d)
{
	return (print_number(d));
}

/**
 *print_integer - print an integer
 *@i: integer
 * Return: value of print_number(i)
 */

int print_integer(va_list i)
{

	return (print_number(i));
}
