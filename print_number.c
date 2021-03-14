#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: number
 */

int print_number(va_list args)
{
	int n;
	int power;
	int result;
	unsigned int nb;

	n = va_arg(args, int);
	power = 1;
	result = 0;

	if (n < 0)
	{
		result += _putchar('-');
		nb = n * -1;
	}
	else
	{
		nb = n;
	}

	while (nb / power > 9)
	{
		power *= 10;
	}

	while (power != 0)
	{
		result = _putchar('0' + nb / power);
		nb %= power;
		power /= 10;
	}

	return (result);
}
