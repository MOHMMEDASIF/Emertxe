#include <stdio.h>
#define PRINT(a, b, c) printf(#a" = %d "#b " = %d "#c" = %d\n", a, b, c)
int main()
{
	int x = 4, y = 4, z = 5;
	int a = 1, b = 2, c = 3;
	PRINT(x, y, z);
	PRINT(a, b, c);

	return 0;
}
