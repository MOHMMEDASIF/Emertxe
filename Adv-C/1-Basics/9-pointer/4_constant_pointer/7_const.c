#include <stdio.h>

int main()
{
	char a[] = "HELLO";
	char * const p = "Asif";

	printf("%s\n", a);
	printf("%s\n", p);
	p++;
	printf("%s\n", p);

	return 0;
}
