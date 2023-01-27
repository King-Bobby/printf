#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int len1, len2;
	long res = INT_MAX;
	
	res *= 2;
	len1 = _printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("%d\n", len1);
	len2 = printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("%d\n", len2);
	/*len1 = _printf("%i\n", 0); 
	printf("%d\n", len1);
	len2 = printf("%i\n", 0);
	printf("%d\n", len2);
	len1 = _printf("iddi%diddiiddi\n", 1024);
	printf("%d\n", len1);
	len2 = printf("iddi%diddiiddi\n", 1024);
	printf("%d\n", len2);
*/

	return (0);
}
