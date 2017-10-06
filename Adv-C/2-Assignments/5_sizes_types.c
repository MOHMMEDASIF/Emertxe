/************************************************************************************************************************************************************

Title		: size of all the available datatypes in c
Author		: MOHMMED ASIF.S
Date		: 4/10/2017
Description	: Print all the reserved memory for available data-types in c using sizeof() operator

************************************************************************************************************************************************************/

//header files
#include<stdio.h> 

int main()
{
	//size of char with signed and unsigned modifiers
	printf("\n\n[size-of char]\n");
	printf("Sizeof(char): %zu\n", sizeof(char));
	printf("Sizeof(signed char): %zu\n", sizeof(signed char));
	printf("Sizeof(unsigned char): %zu\n\n\n", sizeof(unsigned char));

	//size of int with signed and unsigned modifiers
	printf("[size-of int]\n");
	printf("Sizeof(int): %zu\n", sizeof(int));
	printf("Sizeof(signed int): %zu\n", sizeof(signed int));
	printf("Sizeof(unsigned int): %zu\n\n\n", sizeof(unsigned int));

	//size of double
	printf("[size-of double]\n");
	printf("Sizeof(double): %zu\n\n\n", sizeof(double));
	
	//size of long-double
	printf("[size-of long-double]\n");
	printf("Sizeof(long double): %zu\n\n\n", sizeof(long double));
	
	//size of float 
	printf("[size-of Float]\n");
	printf("Sizeof(float): %zu\n\n\n", sizeof(float));
	
	//size of short-int with signed and unsigned modifiers
	printf("[size-of short-int]\n");
	printf("Sizeof(short int): %zu\n", sizeof(short int));
	printf("Sizeof(unsigned short int): %zu\n", sizeof(unsigned short int));    
	printf("Sizeof(signed short int): %zu\n\n\n", sizeof(signed short int));

	//size of long-int with signed and unsigned modifiers
	printf("[size-of long-int]\n");
	printf("Sizeof(long int): %zu\n", sizeof(long int));
	printf("Sizeof(unsigned long int): %zu\n", sizeof(unsigned long int));
	printf("Sizeof(signed long int): %zu\n\n\n", sizeof(signed long int));
	
	//size of long-long-int with signed and unsigned modifiers
	printf("[size-of long-long-int]\n");
	printf("Sizeof(long long int): %zu\n", sizeof(long long int));
	printf("Sizeof(unsigned long long int): %zu\n", sizeof(unsigned long long int));
	printf("Sizeof(signed long long int): %zu\n\n\n", sizeof(signed long long int));

	return 0;
}
