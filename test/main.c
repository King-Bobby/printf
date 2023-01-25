#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent: [%%]\n");
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");

	return (0);
}
