#include "holberton.h"

int get_format(const char *str, ...)
{
	va_list args;

	form_t forms[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	int i = 0;

	va_start(args, str);

	while (forms[i].form != NULL && _strlen(str) == 1)
	{
		if (str[0] == '%')
		{
			(forms[i].f(args));
		}
		i++;
	}

	va_end(args);

	return (0);
}
