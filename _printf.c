#include "holberton.h"

int _printf(const char *format, ...)
{
	int result;
	int i = 0;

	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
			result = get_format(format[i]);
		i++;
	}
	va_end(args);

	return (result);
}
