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
/**
 *print_rot13 - print a string convert in rot13
 *@R: string to modif
 *Return: value of rot13
 */
int print_rot13(va_list R)
{
	return (rot13(va_arg(R, char *)));
}
