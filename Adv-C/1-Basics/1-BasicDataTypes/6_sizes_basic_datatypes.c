/*
Demo code to print size of all the data type
*/

#include<stdio.h>

int main()
{
	//print the size of the char data type
	printf("Sizeof(char):%zu\n", sizeof(char));

	//print the size of the int data type
	printf("Sizeof(int):%zu\n", sizeof(int));

	//print the size of the long data type
	printf("Sizeof(long):%zu\n", sizeof(long));
	
	//print the size of the float data type
	printf("Sizeof(float):%zu\n", sizeof(float));
	
	//print the size of the double data type
	printf("Sizeof(double):%zu\n", sizeof(double));

	//print the size of the longdouble data type
	printf("Sizeof(longdouble):%zu\n", sizeof(long double));

	//print the size of the longfloat data type
//	printf("Sizeof(longfloat):%zu\n", sizeof(long float));
	
	return 0;

}
