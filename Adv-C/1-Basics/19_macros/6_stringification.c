#include <stdio.h>
#define PRINT(expr) printf(#expr "=%d", expr)

int main()
{
	int a = 2, b =3;

	PRINT(a + b);
	
	return 0;
}
