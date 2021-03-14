#include "holberton.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	int (*f)(va_list);
	int len;
	int i = 0;

	va_list args;

	va_start(args, format);

	len = _strlen(format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			f = get_format(format[i]);
			if (f == NULL)
			{
				return (0);
			}
			f(args);
			i++;
			continue;

		}
		_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (len);
}
