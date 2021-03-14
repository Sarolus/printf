#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stddef.h>

/**
 *
 *
 */

typedef struct form
{
	char *form;
	int (*f)(va_list);
} form_t;

int _putchar(char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
int (*get_format(char c))(va_list);
int print_char(va_list c);
int print_str(va_list s);

#endif /* HOLBERTON_H */
