/*
	demo code for over and under flow
*/

#include<stdio.h>

int main()
{

	signed char ch = 130;
	printf("ch:%d\n", ch);
	signed char ch1 = -129;
	printf("ch1:%d\n", ch1);
	
	unsigned char chu = 257;
	printf("chu:%u\n", chu);
	unsigned char chu1 = -1;
	printf("ch1:%u\n", chu1);

	return 0;
}
