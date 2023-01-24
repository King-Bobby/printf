#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: character
 * Return: 1 if succesful, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
