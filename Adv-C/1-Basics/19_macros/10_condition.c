#include <stdio.h>
#define DEBUG_MODE 0 

int main()
{
	int a, b;

	printf("Enter A and B:");
	scanf("%d%d", &a, &b);

#undef DEBUG_MODE
#ifdef DEBUG_MODE
printf("a = %d\t b = %d\n", a, b);
#endif

	printf("Sum : %d\n", a + b);
	return 0;
}
