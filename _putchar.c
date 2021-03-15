#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - Write a string of str[] characters to stdout
 * @: The string to print
 *
 * Return: return (null) if null, otherwise return the string.
 */
int _putstr(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
