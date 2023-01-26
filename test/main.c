#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	
	 int len1, len2;
	 /** unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent: [%%]\n");
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	len1 = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	printf("%d\n", len1);
	len2 = printf("Complete the sentence: You wonk nothing, Jon Snow.\n");
	printf("%d\n", len2);*/
	
	len1 = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	printf("%d\n", len1);
	len2 = printf("This sentence is retrieved from va_args!\n");
	printf("%d\n", len2);
	len1 = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	printf("%d\n", len1);
	len2 = printf("Complete the sentence: You know nothing, Jon Snow.\n");
	printf("%d\n", len2);
	len1 = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	printf("%d\n", len1);
	len2 = printf("Complete the sentence: You  nothing, Jon Snow.\n");
	printf("%d\n", len2);

	return (0);
}
