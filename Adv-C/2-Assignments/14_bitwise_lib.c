/************************************************************************************************************************************************************

Title		: Implimenting the bitwise function
Author		: MOHMMED ASIF.S
Date		: 21/10/2017
description	: get_nbits, replace_n_bits, get_n_bits_from_pos, replace_nbits_from_pos, toggle_bits_from_pos, print_bits are the function need to be impliment

************************************************************************************************************************************************************/

#include<stdio.h>

//function prototype
int get_nbits(int, int);
int replace_nbits(int, int, int);
int get_nbits_from_pos(int, int, int);
int replace_nbits_from_pos(int, int, int, int);
int toggle_bits_from_pos(int, int, int);
int print_bits(unsigned int, int);

int main()
{
	char option;

	do
	{
		int user_choice, num, n, val, pos;

		//prompt the user for the choice
		printf("Select Bit-operation from Below List\n1.Get_nbits\n2.Set_nbits\n3.Get_nbits_from_pos\n4.Set_nbits_from_pos\n5.Toggle_bits_from_pos\n6.Print_bits\nEnter Your Choice:");
		scanf("%d", &user_choice);

		switch(user_choice)
		{
			case 1:
					get_nbits(num, n);
					break;
			case 2:
					replace_nbits(num, n, val);
					break;
			case 3:
					get_nbits_from_pos(num, n, pos);
					break;
			case 4:
					replace_nbits_from_pos(num, n, pos, val);
					break;
			case 5:
					toggle_bits_from_pos(num, n, pos);
					break;
			case 6:
					print_bits(num, n);
					break;
					
			default: 
				puts("Invalid Entry...");

		}
int get_nbits(int num , int n)
{

	return 1;
}
int replace_nbits(int num, int n, int val)
{
	return 1;
}
int get_nbits_from_pos(int num, int n, int pos)
{
	return 1;
}
int replace_nbits_from_pos(int num, int n, int pos, int val)
{
	return 1;
}
int toggle_bits_from_pos(int num, int n, int pos)
{
	return 1;
}
int print_bits(unsigned int num, int n)
{

	return 1;
}



		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
