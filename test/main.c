#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent: [%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("Positive:[%d]\n", 762534);
	printf("Positive:[%d]\n", 762534);
	
	return (0);
}
