#include "holberton.h"

/**
 *get_format -  Get the adequate function depending of the format.
 *@c: char
 *Return: Pointer to the specified function
 */

int (*get_format(char c))(va_list)
{
	form_t forms[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_decimal},
		{"r", print_str_rev},
		{"R", print_rot13}
	};

	int i = 0;

	while (i < 7)
	{
		if (c == forms[i].form[0])
		{
			return (forms[i].f);
		}
		i++;
	}

	return (NULL);
}
