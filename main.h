#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(va_list list);
int _print_str(va_list list);
int print_digit(va_list list);
int _unsigned(va_list list);
int String(va_list list);
int print_oct(va_list list);
int print_rev(va_list list);
int rot13(va_list list);
int Dtobinary(va_list list);
int hexalower(va_list list);
int hexaUpper(va_list list);
int pointer(va_list list);

#endif
