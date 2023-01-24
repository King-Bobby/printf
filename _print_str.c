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
