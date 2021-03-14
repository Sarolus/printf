#include "holberton.h"

/**
 *get_format -  azerty
 *@c: char
 *Return: forms[i].f
 */

int (*get_format(char c))(va_list)
{
	form_t forms[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_decimal}
	};

	int i = 0;

	while (i < 4)
	{
		if (c == forms[i].form[0])
		{
			return (forms[i].f);
		}
		i++;
	}

	return (NULL);
}
