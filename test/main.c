#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len1, len2;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent: [%%]\n");
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	len1 = _printf("%r", "\nThis sentence is retrieved from va_args!");
	printf("%d\n", len1);
	len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
	printf("%d\n", len2);
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");

	return (0);
}
