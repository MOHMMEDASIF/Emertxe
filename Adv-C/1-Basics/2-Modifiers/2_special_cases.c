/*
	Demo code for special cases
*/

#include<stdio.h>

int main()
{
	char ch;
	printf("sizeof(char):%zu\n", sizeof(char));
	printf("sizeof(ch):%zu\n", sizeof(ch));
	printf("sizeof('A'):%zu\n\n", sizeof('A'));
	
	float f;
	printf("sizeof(float):%zu\n", sizeof(float));
	printf("sizeof(f):%zu\n", sizeof(f));
	printf("sizeof(1.5):%zu\n\n", sizeof(123456789.123456789));
	
	int fi;
	printf("sizeof(int):%zu\n", sizeof(int));
	printf("sizeof(fi):%zu\n", sizeof(fi));
	printf("sizeof(1):%zu\n", sizeof(12));
	


	return 0;
}
