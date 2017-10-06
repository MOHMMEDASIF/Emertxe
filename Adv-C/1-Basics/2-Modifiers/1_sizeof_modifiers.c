/*
	Demo code to find sizes-of all modifiers with integral data types
*/

#include<stdio.h>

int main()
{
	//char 
	printf("Sizeof(char): %zu\n", sizeof(char));
	printf("Sizeof(signed char): %zu\n", sizeof(signed char));
	printf("Sizeof(unsigned char): %zu\n\n", sizeof(unsigned char));	
//	printf("Sizeof(short char): %zu\n", sizeof(short char));
	
	
	
	printf("Sizeof(int): %zu\n", sizeof(int));
	printf("Sizeof(signed int): %zu\n", sizeof(signed int));
	printf("Sizeof(unsigned int): %zu\n\n", sizeof(unsigned int));

	printf("Sizeof(short int): %zu\n", sizeof(short int));
	printf("Sizeof(unsigned short int): %zu\n", sizeof(unsigned short int));	
	printf("Sizeof(signed short int): %zu\n\n", sizeof(signed short int));
	
	printf("Sizeof(long int): %zu\n", sizeof(long int));
	printf("Sizeof(unsigned long int): %zu\n", sizeof(unsigned long int));	
	printf("Sizeof(signed long int): %zu\n\n", sizeof(signed long int));

	printf("Sizeof(long long int): %zu\n", sizeof(long long int));
	printf("Sizeof(unsigned long long int): %zu\n", sizeof(unsigned long long int));	
	printf("Sizeof(signed long long int): %zu\n\n", sizeof(signed long long int));



	return 0;
}
