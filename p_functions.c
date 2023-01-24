#include "main.h"

/**
 * _print_str - prints a string
 * @s: string
 * Return: Always 0
 */
int _print_str(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	return (0);
}

/**
 * _pchar - prints a character
 * @c: charcter
 * Return: ..
 */
int _pchar(char c)
{
	return (_putchar(c));
}

/**
 * Dtobinary - Coverts decimal to binary
 * @num: number to convert
 */
void Dtobinary(int num)
{
	int i;
	
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 31; i >= 0; i--)
	{
		_putchar('0' + ((num >> i) & 1));
	}
}
