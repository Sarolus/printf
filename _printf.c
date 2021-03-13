#include "holberton.h"

int _printf(const char *format, ...)
{
	int result;

	va_list args;

	va_start(args, format);

	result = get_format(format, args);

	va_end(args);

	return (result);
}
