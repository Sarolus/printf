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
	void (*f)(va_list);
} form_t;

int _putchar(char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
void (*get_format(char c))(va_list);
void print_char(va_list c);
void print_str(va_list s);
void print_value(va_list d);
void print_integer(va_list i);

#endif /* HOLBERTON_H */
