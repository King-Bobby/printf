#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	signed int len1, len2;
	
	len1 = _printf("%d\n", -1024);
	printf("%d\n", len1);
	len2 = printf("%d\n", -1024);
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
