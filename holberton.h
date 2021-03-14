#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stddef.h>

/**
 *struct form - structur
 *@form: pointer
 *@f: function
 */

typedef struct form
{
	char *form;
	int (*f)(va_list);
} form_t;

int _putchar(char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
int print_number(va_list args);
int (*get_format(char c))(va_list);
int print_char(va_list c);
int print_str(va_list s);
int print_percent(va_list p);
int print_decimal(va_list d);
int print_integer(va_list i);

#endif /* HOLBERTON_H */
