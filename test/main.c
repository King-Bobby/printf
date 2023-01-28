#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int len1, len2;

	len1 = _printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("%d\n", len1);
	len2 = printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("%d\n", len2);
	len1 = _printf("%p", NULL);
	printf("%d\n", len1);
	len2 = printf("%p", NULL);
	printf("%d\n", len2);
	/*_printf(NULL);*/
	/*printf("%d\n", len1);*/
	/*printf("%d\n", len2);*/

	return (0);
}
