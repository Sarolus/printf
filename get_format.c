#include "holberton.h"

/**
 *get_format -  azerty
 *@c: char
 *Return: forms[i].f
 */

void (*get_format(char c))(va_list)
{
	form_t forms[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_value},
		{"i", print_integer}
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
