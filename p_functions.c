#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

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
	return (n);
}

/**
 * String - prints string but prints \n as hexa
 * @list: va_list
 * Return: ..
 */
int String(va_list list)
{
	int n = 0;
	char *str = va_arg(list, char *);

	while (str[n] != '\0')
	{
		if (str[n] == '\\')
		{
			if (str[n + 1] == 'n')
				_putchar(10);
			else
				_putchar(str[n]);
		}
		else
			_putchar(str[n]);
		n++;
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
 * print_oct - prints in octal
 * @list: va_list
 * Return: Always 0
 */
int print_oct(va_list list)
{
	int a, b, arr[100];
	unsigned int octal;

	octal = va_arg(list, unsigned int);
	if (octal == 0)
		return (_putchar('0'));
	for (a = 0; octal != 0; a++)
	{
		arr[a] = octal % 8;
		octal /= 8;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(arr[b] + '0');
	return (a);
}

/**
 * hexalower -  prints hexadecimal in lowercase
 * @list: va_list
 * Return: number length
 */
int hexalower(va_list list)
{
	int a, b, remainder, arr[100];
	unsigned int hexa;	

	hexa = va_arg(list, unsigned int);
	if (hexa == 0)
		return (_putchar('0'));
	for (a = 0; hexa != 0; a++)
	{
		remainder =  hexa % 16;
		if (remainder < 10)
			arr[a] = remainder + '0';
		else
			arr[a] = remainder + 'W';
		hexa /= 16;
	}
	for (b = a -1; b >= 0; b--)
		_putchar(arr[b]);
	return (a);
}

/**
 * pointer - prints pointer address in hexa
 * @list: va_list
 * Return: length
 */
int pointer(va_list list)
{
	int i, j, rmda, arr[100];
	char *n = "(nil)";
	long int cast;

	void *ptr = va_arg(list, void*);
	if (ptr == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (i);
	}
	cast = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	if (cast == 0)
		return (_putchar('0'));
	for (i = 0; cast != 0; i++)
	{
		rmda = cast % 16;
		if (rmda < 10)
			arr[i] = rmda + '0';
		else
			arr[i] = rmda + 'W';
		cast /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i + 2);
}

/**
 * hexaUpper - prints hexadecimal in Uppercase
 * @list: va_list;
 * Return: number length
 */
int hexaUpper(va_list list)
{
	int a, b, remainder, arr[100];
	unsigned int hexa;

	hexa = va_arg(list, unsigned int);
	if (hexa == 0)
		return (_putchar('0'));
	for (a = 0; hexa != 0; a++)
	{
		remainder = hexa % 16;
		if (remainder < 10)
			arr[a] = remainder + '0';
		else
			arr[a] = remainder + '7';
		hexa /= 16;
	}
	for (b =  a - 1; b >= 0; b--)
		_putchar(arr[b]);
	return (a);
}
/**
 * print_digit - prints digits
 * @list: va_list
 * Return: Number length
 */
int print_digit(va_list list)
{
	int a, b, arr[100], count = 0;
	signed int dec;

	dec = va_arg(list, signed int);
	if (dec == 0)
		return (_putchar('0'));
	if (dec < 0)
	{
		dec = dec * -1;
		_putchar('-');
		count = count + 1;
	}
	for (a = 0; dec != '\0'; a++)
	{
		arr[a] = dec % 10;
		dec /= 10;
		count++;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(arr[b] + '0');
	return (count);
}

/**
 * plus_sign - puts + in front of positive numbers
 * @list: va_list
 * Return: count
 */
int plus_sign(va_list list)
{
	int a, b, arr[100], count = 0;
	signed int dec;

	dec = va_arg(list, signed int);
	if (dec == 0)
	{
		_putchar('+');
		_putchar('0');
		count = count + 2;
		return (count);
	}
	if (dec < 0)
	{
		dec = dec * -1;
		_putchar('-');
		count = count + 1;
	}
	if (dec > 0)
	{
		dec = dec * 1;
		_putchar('+');
		count = count + 1;
	}
	for (a = 0; dec != '\0'; a++)
	{
		arr[a] = dec % 10;
		dec /= 10;
		count++;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(arr[b] + '0');
	return (count);
}

/**
 * _unsigned - prints values in unsigned int
 * @list: va_list
 * Return: length
 */
int _unsigned(va_list list)
{
	int a, b, arr[100];
	unsigned int unsgn;

	unsgn = va_arg(list, unsigned int);
	if (unsgn == 0)
		return (_putchar('0'));
	for (a = 0; unsgn != '\0'; a++)
	{
		arr[a] = unsgn % 10;
		unsgn /= 10;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(arr[b] + '0');
	return (a);
}

/**
 * print_rev - prints a string in reverse
 * @list: va_list
 * Return: length
 */
int print_rev(va_list list)
{
	int len = 0, ln;
	char *str = va_arg(list, char *);

	while (*str != '\0')
	{
		len++;
		++str;
	}
	str--;
	ln = len;
	for (; len > 0; len--)
	{
		_putchar(*str);
		str--;
	}
	return (ln);
}

/**
 * rot13 - encodes string using rot13
 * list: va_list
 * Return: string
 */
int rot13(va_list list)
{
	int i, j, num = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(list, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			for (j = 0; alpha[j] != '\0'; j++)
			{
				if (str[i] == alpha[j])
				{
					num += _putchar(rot13[j]);
					break;
				}
			}
		}
		else
			num += _putchar(str[i]);
	}
	return (num);
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
