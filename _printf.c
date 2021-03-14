#include "holberton.h"

/**
 *_printf - function that produces output according to a format
 *@format: character string
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	void (*f)(va_list);
	int count = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

       	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;

			while (format[i] === ' ')
				i++;

			f = get_format(format[i]);
			if (f == NULL)
			{
				return (-1);
			}
			f(args);
			i++;
			continue;

		}
		_putchar(format[i]);
		count = count + _putchar(format[i]);
		i++;
	}

	va_end(args);

	return (count);
}
