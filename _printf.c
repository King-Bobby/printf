#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _printf - prints like printf
 * @format: is a character string
 * Return: the number of characters printed, except NULL byte
 */
int _printf(const char *format, ...)
{
	va_list list;
	int index, n_displayed = 0;
	char *str = NULL;

	if (format == NULL)
		return (-1);
	
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
				_putchar(va_arg(list, int));
				n_displayed++;
				index++;
			}
			else if (format[index + 1] == '%')
			{
				index++;
				_putchar('%');
				n_displayed++;

			}
			else if (format[index + 1] == 's')
			{
				index++;
				str = va_arg(list, char *);
				_print_str(str);
				n_displayed++;
			}
		}
	}
	va_end(list);
	return (n_displayed);
}
