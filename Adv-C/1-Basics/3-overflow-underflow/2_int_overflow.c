/*
	Demo code for demonstrating under and over flow of int datatype
*/

#include<stdio.h>

int main()
{
	signed 	int a=2147483648,b=-2147483649;
	printf("int:value of a is %d\n", a);
	printf("value of b is %d\n\n", b);

	signed 	short int c=32767,d=-32769;
	printf("signed short int :value of c is %d\n", c);
	printf("value of d is %d\n\n", d);
	
	unsigned short int e=65536,f=-1;
	printf("unsigned short int :value of e is %u\n", e);
	printf("value of f is %u\n\n", f);
	
	signed 	long int g=2147483648,h=-2147483649;
	printf("signed long int :value of g is %d\n", g);
	printf("value of h is %d\n\n", h);
	
	unsigned long int i=4294967296,j=-1;
	printf("unsigned long int :value of i is %u\n", i);
	printf("value of j is %u\n\n", j);
	
	return 0;

}
