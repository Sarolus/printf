#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct form
{
	char *form;
	void (*f)(int, int);
} form_t

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_str(va_list args);

#endif
