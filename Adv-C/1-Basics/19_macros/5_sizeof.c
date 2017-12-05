#include <stdio.h>
#define SIZEOF(a)  (char *)(&a + 1) - (char *)(&a)

int main()
{
	int a;
	double b;
	char c;
	float e;

	printf("%d\n", SIZEOF(a));
	printf("%d\n", SIZEOF(b));
	printf("%d\n", SIZEOF(c));
	printf("%d\n", SIZEOF(e));
}
