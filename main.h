#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(va_list list);
int _print_str(va_list list);
int _print_int(int n);
int Dtobinary(va_list list);

#endif
