#include "holberton.h"

void (*get_format(char c))(va_list)
{

	form_t forms[] = {
		{"c", print_char},
		{"s", print_str},
	};

	int i = 0;

	while (i < 2)
	{
		if (c == forms[i].form[0])
		{
			return (forms[i].f);
		}
		i++;
	}

	return (NULL);
}
