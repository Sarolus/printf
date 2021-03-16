#include "holberton.h"

/**
 *_printf - function that produces output according to a format
 *@format: character string
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int (*f)(va_list);
	int i = 0;
	int count = 0;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	if (check_flags(format) == -1)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			f = get_format(format[i]);
			if (f == NULL)
			{
				return (-1);
			}
			count += f(args);
			i++;
			continue;
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
/**
 * check_flags - Quick check of the format.
 * @format: character string.
 * Return: return -1 if inadequate format, otherwise return 0.
 */
int check_flags(const char *format)
{
	int (*f)(va_list);
	int i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			f = get_format(format[i]);
			if (f == NULL)
			{
				return (-1);
			}
		}
		i++;
	}
	return (0);
}
