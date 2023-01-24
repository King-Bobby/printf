#include "main.h"
#include <stdio.h>

/**
 * _print_str - prints a string
 * @list: va_list
 * Return: Always 0
 */
int _print_str(va_list list)
{
	int n;
	char *s = va_arg(list, char *);

	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	return (0);
}

/**
 * _pchar - prints a character
 * @list: va_list
 * Return: ..
 */
int _pchar(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * Dtobinary - Coverts decimal to binary
 * @list: va_list
 * Return: ..
 */
int Dtobinary(va_list list)
{
	unsigned int num;
	int a = 0, b;
	int arr[100];

	num = va_arg(list, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		arr[a] = num % 2;
		num /= 2;
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(arr[b] + '0');
	}
	return (a);
}
