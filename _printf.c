#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints like printf
 * @format: is a character string
 * Return: the number of characters printed, except NULL byte
 */
int _printf(const char *format, ...)
{
	va_list list;
	int index;

	va_start(list, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
			_putchar(format[index]);
		else
		{
			if (format[index + 1] == 'c')
			{
				_putchar(va_arg(list, int));
				index++;
			}
			else if (format[index + 1] == '%')
			{
				_putchar('%');
			}
		}
	}
	va_end(list);
	return (0);
}
