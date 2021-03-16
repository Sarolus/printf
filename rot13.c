#include "holberton.h"
/**
 *rot13 - replace specific char in a string by num
 *@str: string to modif
 *Return: corected string
 */
int rot13(char *str)
{
	int i;
	int j;
	char origin[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char modif[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == origin[j])
			{
				_putchar(modif[j]);
				break;
			}
		}
		if (j == 53)
		{
			_putchar(str[i]);
		}
	}
	return (i);
}
