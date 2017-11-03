/************************************************************************************************************************************************************

Title		: Circular Right shift and Left Shift of the N-bits from the user
Author		: MOHMMED ASIF.S
Date		: 25/10/2017
description	: Get the value from the user. Either left shift the n-bits or right shift according to the user choice

************************************************************************************************************************************************************/

#include<stdio.h>

//function prototype
unsigned int right_shift( unsigned int number,unsigned  int n_bits);
unsigned int left_shift(unsigned int number,unsigned int n_bits);
void print_bits(int value);

int main()
{
	char option;

	do
	{
		unsigned int value, number, n_bits, user_choice;

		//prompt the user for the Number
		printf("Enter the Number:");
		scanf("%d", &number);

		//prompt for the n-bit to be shifted
		printf("Enter n-bits to rotate:");
		scanf("%d", &n_bits);

		//prompt the user for the User_choice
		printf(" 1.Circular Right shift\n 2.Circular Left shift\nEnter Your Choice:");
		scanf("%d", &user_choice);

		//validate the user_option
		switch(user_choice)
		{
			case 1:
				printf("Binary Form of the Number[%d] is:", number);
				print_bits(number);
				
				//calls the function to perform right shift
				value = right_shift(number, n_bits);

				printf("\nAfter Circular Right Shift:");
				print_bits(value);

				break;
			case 2:
				printf("Binary Form of the Number[%d] is:", number);
				print_bits(number);

				//calls the function to perform left shift
				value = left_shift(number, n_bits);

				printf("\nAfter Circular Left Shift:");
				print_bits(value);

				break;
			default:
				puts("Invlid Entry...");
		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function ruturns the circular_right shifted value
unsigned int right_shift(unsigned int number,unsigned int n_bits)
{
	return  ((number & ((1 << n_bits) - 1)) << (sizeof(int) * 8 - n_bits)) | (number >> n_bits);

}

//function ruturns the circular_left shifted value
unsigned int left_shift(unsigned int number,unsigned int n_bits)
{
	return   ((number & (~0 << (sizeof(int) * 8 - n_bits))) >> (sizeof(int) * 8 - n_bits))  | (number << n_bits)  ; 
}

//function prints the value in binary form
void print_bits(int value)
{
	unsigned mask;

	for(mask = (1 << (sizeof(int) * 8 - 1)); mask; mask >>= 1)
	{
		(value & mask) ? putchar('1'): putchar('0');
	}

}
