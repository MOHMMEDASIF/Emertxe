#include <stdio.h>
#define SETNBIT(x, y) x | (1 << y)

int main()
{
	int num, n;
	
	printf("Enter the Number:");
	scanf("%d", &num);

	printf("Enter the N:");
	scanf("%d", &n);

	int m = SETNBIT(num, n);
	
	printf("%d\n", m);

	return 0;
}
