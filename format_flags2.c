#include "holberton.h"
/**
 *print_str_rev - print string in reverse
 *@r: string reverse
 *Return: value of print_rev
 */
int print_str_rev(va_list r)
{
	return (print_rev(va_arg(r, char *)));
}
