/************************************************************************************************************************************************************

Title		: float TO binary
Author		: MOHMMED ASIF.S
Date		: 12/11/2017
description	: Print the binary form of the floating number

************************************************************************************************************************************************************/

#include<stdio.h>

void print_bits(int num, size_t n);
void print_bits_1(int num, size_t n);
void print_bits_void_ptr(void *p, size_t n);

int main()
{
	char option;

	do
	{
		float f;
		
		//promt the  user for the floating point number
		printf("Enter the Floating point Number:");
		scanf("%f", &f);

		//type cast the address pointer to int 
		int *p = (int *)&f;

		//pass the address pointer of type int to print the value of the bit and the sizeof the value
		print_bits(*p, sizeof(float) * 8);

		puts("");

		print_bits_void_ptr(&f + 1 , sizeof(float));

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function prints as bytes
void print_bits_void_ptr(void *p, size_t n)
{
	//becaus of the endianess of the processor maximum value will be stored in the smallest byte
	p = p - 1;
	int i;

	for(i = 0; i < n; i++)
	{
		print_bits_1(*(char *)p, 1);

		//decrementing value to pass least value from the memory 
		p = p - 1;
	}
}

//function prints as a bits
void print_bits(int num, size_t n)
{
	unsigned int mask;

	for(mask = 1 << ((sizeof(int) * 8) - 1); mask; mask >>= 1)
	{
		num & mask ? putchar('1'):putchar('0') ;
	}
}

//function prints as a byte
void print_bits_1(int num, size_t n)
{
	unsigned int mask;

	for(mask = 1 << 7; mask; mask >>= 1)
	{
		num & mask ? putchar('1'):putchar('0') ;
	}
}
