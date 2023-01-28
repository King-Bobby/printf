#include "main.h"

/**
 * _printf - prints like printf
 * @format: is a character string
 * Return: the number of characters printed, except NULL byte
 */
int _printf(const char *format, ...)
{
	va_list list;
	int index, n_displayed = 0;

	va_start(list, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			n_displayed++;
		}
		else
		{
			if (format[index + 1] == 'c')
			{
				_pchar(list);
				index++;
				n_displayed++;
			}
			if (format[index + 1] == 's')
			{
				index++;
				n_displayed += _print_str(list);
			}
			if (format[index + 1] == 'S')
			{
				index++;
				n_displayed += String(list);
			}
			if (format[index + 1] == '%')
			{
				index++;
				_putchar('%');
				n_displayed++;
			}
			if ((format[index + 1] == 'd') || format[index + 1] == 'i')
			{
				index++;
				n_displayed += print_digit(list);
			}
			if (format[index + 1] == 'b')
			{
				index++;
				n_displayed += Dtobinary(list);
			}
			if (format[index + 1] == 'r')
			{
				index++;
				n_displayed += print_rev(list);
			}
			if (format[index + 1] == 'o')
			{
				index++;
				n_displayed += print_oct(list);
			}
			if (format[index + 1] == 'R')
			{
				index++;
				n_displayed += rot13(list);
			}
			if (format[index + 1] == 'u')
			{
				index++;
				n_displayed += _unsigned(list);
			}
			if (format[index + 1] == 'x')
			{
				index++;
				n_displayed += hexalower(list);
			}
			if (format[index + 1] == 'X')
			{
				index++;
				n_displayed += hexaUpper(list);
			}
			if (format[index + 1] == 'p')
			{
				index++;
				n_displayed += pointer(list);
			}
		}
	}
	va_end(list);
	return (n_displayed);
}
