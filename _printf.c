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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				f = get_format(format[i + 1]);
			}
			if (f == NULL)
			{
				_putchar(format[i]);
				count++;
				i++;
			}
			else
			{
				count += f(args);
				i += 2;
				continue;
			}
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
