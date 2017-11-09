/************************************************************************************************************************************************************

Title		:
Author		:
Date		:
description	:

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

		printf("Enter the Floating point Number:");
		scanf("%f", &f);

		int *p = (int *)&f;

		
		print_bits(*p, sizeof(float) * 8);
		puts("");	
		print_bits_void_ptr(&f + 1 , sizeof(float));

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
void print_bits_void_ptr(void *p, size_t n)
{
	p = p - 1;
	int i;
	for(i = 0; i < n; i++)
	{
		print_bits_1(*(char *)p, 1);
		p = p - 1;
	}
}

void print_bits(int num, size_t n)
{
	unsigned int mask;

	for(mask = 1 << ((sizeof(int) * 8) - 1); mask; mask >>= 1)
	{
		num & mask ? putchar('1'):putchar('0') ;
	}
}

void print_bits_1(int num, size_t n)
{
	unsigned int mask;

	for(mask = 1 << 7; mask; mask >>= 1)
	{
		num & mask ? putchar('1'):putchar('0') ;
	}
}
