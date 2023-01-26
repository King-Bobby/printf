#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len2;/*, len2;

	len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0); 
	printf("%d\n", len1);*/
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\n", len2);


	return (0);
}
