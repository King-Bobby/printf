#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int len1, len2;

/*	len1 = _printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("%d\n", len1);
	len2 = printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("%d\n", len2);*/
	len1 = _printf("%#o\n", 1024);
	printf("%d\n", len1);
	len2 = printf("%#o\n", 1024);
	printf("%d\n", len2);
	len1 = _printf("There is % i bytes in % i KB\n", 1024, 1);
	printf("%d\n", len1);
	len2 = printf("There is % i bytes in % i KB\n", 1024, 1);
	printf("%d\n", len2);

	return (0);
}
