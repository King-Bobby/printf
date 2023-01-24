#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - prints like printf
 * @format: is a character string
 * Return: the number of characters printed, except NULL byte
 */
int _printf(const char *format, ...)
{
	va_list list;
	int index, a = 0;
	char *str = NULL;
	int n_displayed = 0;

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
				while (str[a] != '\0')
				{
					_putchar(str[a]);
					n_displayed++;
					a++;
				}
			}
		}
	}
	va_end(list);
	return (n_displayed);
}
