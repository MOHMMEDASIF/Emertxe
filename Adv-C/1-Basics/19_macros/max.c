#include <stdio.h>
#define MAX(a, b) a > b ? a:b

int main()
{
	int x = 3, y = 2;

	int m = MAX(++x, y);

	printf("%d\n", m);
	printf("%d\n", x);

}
