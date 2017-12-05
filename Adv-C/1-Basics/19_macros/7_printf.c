#include <stdio.h>
#define PRINT(x, y) printf("VALUE :" #x "=" #y"\n", x)


int main()
{
	int x =4;
	char ch = 'a';
	float f = 3.14;

	PRINT(x, %d);
	PRINT(ch, %c);
	PRINT(f, %f);
	return 0;
}
