/************************************************************************************************************************************************************

Title		: Implimenting the bitwise function
Author		: MOHMMED ASIF.S
Date		: 21/10/2017
description	:     get_nbits
If num is 10 and n is 2,
10 -> 0 0 0 0 1 0 1 0
Take 2 bits from LSB end of 10 (1 0) and return the corresponding decimal of that.
So get_nbits(10, 2) function should return 2
replace_nbits
Read number num from user.
Read number n from user.
Read number val from user
Fetch n number of bits from LSB end of val and replace in the last n bits of num.
Return new value of num.

If num is 10 and n is 3 and val is 12
10 -> 0 0 0 0 1 0 1 0
—–
12 -> 0 0 0 0 1 1 0 0
—–
The function should return 12 (1 1 0 0)
get_nbits_from_pos
Read number num from user.
Read number n from user.
Read number pos from user.
Fetch n number of bits from given position ‘pos’ (starting from LSB) of num and return the decimal value of it.

If num is 12, n is 3 and pos is 4
7 6 5 4 3 2 1 0
—————–
12 -> 0 0 0 0 1 1 0 0
—————–
The function should return 3 (0 1 1).
replace_nbits_from_pos
Read number num from user.
Read number n from user.
Read number pos from user.
Read number val from user.
Fetch n number of bits from LSB of val.
Place those fetched bits from pos positionth bit of num and return new value of num.

If num is 12, n is 3, pos is 4 and val is 20
7 6 5 4 3 2 1 0
20 -> 0 0 0 1 0 1 0 0
—————–
10 -> 0 0 0 0 1 1 0 0
—————–
return value-> 0 0 0 1 0 0 0 0
So function should return 16 (1 0 0 0 0).
toggle_bits_from_pos
Read number num from user
Read number n from user
Read number pos from user
Invert the n number of bits from pos positionth bit of num.
Return the new value of num

If num is 10, n is 3, and pos is
7 6 5 4 3 2 1 0
——————-
10 -> 0 0 0 0 1 0 1 0
——————
return value -> 0 0 1 1 0 0 1 0
So the function should return 50 (0 0 1 1 0 0 1 0)
print_bits
Read number num from user.
Read number n from user.
Do error checking

-> If n is greater than integer size, assign n value as sizeof integer.
d. Print n number of bits of num from LSB end.
If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0

************************************************************************************************************************************************************/

#include<stdio.h>

void print_b(int num);
int get_nbits(int num, int n);
int replace_nbits(int num, int n, int val);
int get_nbits_from_pos(int num, int n, int pos);
int replace_nbits_from_pos(int num, int n, int pos, int val);
int toggle_bits_from_pos(int num, int n, int pos);
void print_bits(unsigned int num, int n);

int main()
{
	char option;

	do
	{
		//declaration of the variables
		int user_choice, num, n, val, pos;
		int returned_value;

		//prompt the user for the choice
		printf("Select Bit-operation from Below List\n1.Get_nbits\n2.Set_nbits\n3.Get_nbits_from_pos\n4.Set_nbits_from_pos\n5.Toggle_bits_from_pos\n6.Print_bits\nEnter Your Choice:");
		scanf("%d", &user_choice);

		//validates the user_option
		switch(user_choice)
		{
			case 1:

				printf("Enter The Number:");
				scanf("%d", &num);

				printf("Enter N-bits:");
				scanf("%d", &n);

				returned_value = get_nbits(num, n);

				printf("Returned Value:%d", returned_value );
				print_b(returned_value);
				break;
			case 2:
				printf("Enter The Number:");
				scanf("%d", &num);

				printf("Enter the N-bit:");
				scanf("%d", &n);

				printf("Enter The Value:");
				scanf("%d", &val);

				returned_value = replace_nbits(num, n, val);
				printf("Returned Value:%d", returned_value );
				print_b(returned_value);
				break;
			case 3:
				printf("Enter The Number:");
				scanf("%d", &num);

				printf("Enter the N-bit:");
				scanf("%d", &n);

				printf("Enter The POS:");
				scanf("%d", &pos);

				returned_value = get_nbits_from_pos(num, n, pos);
				printf("Returned Value:%d", returned_value );
				print_b(returned_value);
				break;
			case 4:
				printf("Enter The Number:");
				scanf("%d", &num);

				printf("Enter the N-bit:");
				scanf("%d", &n);

				printf("Enter The POS:");
				scanf("%d", &pos);

				printf("Enter The Val:");
				scanf("%d", &val);

				returned_value = replace_nbits_from_pos(num, n, pos, val);
				printf("Returned Value:%d", returned_value );
				print_b(returned_value);
				break;
			case 5:
				printf("Enter The Number:");
				scanf("%d", &num);

				printf("Enter the N-bit:");
				scanf("%d", &n);

				printf("Enter The POS:");
				scanf("%d", &pos);

				returned_value = toggle_bits_from_pos(num, n, pos);

				printf("Returned Value:%d", returned_value );
				print_b(returned_value);
				break;
			case 6:
				printf("Enter The Number:");
				scanf("%d", &num);

				do
				{
					printf("Enter the N-bit[1-32]:");
					scanf("%d", &n);
				}while(n > (sizeof(int) * 8));

				print_bits(num, n);
				break;

			default: 
				puts("Invalid Entry...");

		}


		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function to return the n_bits
int get_nbits(int num , int n)
{
	return (num & ~(~0 << n)) ;

}

//function to return the replaced n-bits
int replace_nbits(int num, int n, int val)
{  	  
	return (val & ((1 << n) - 1))|(num & ~((1 << n) - 1));
}

//function to replace the n_bits from pos of the val
int get_nbits_from_pos(int num, int n, int pos)
{
	return ((num & ((~(~0 << n)) << pos - n + 1)) >> (pos - n +1));
}

//function to replace the n_bits from pos
int replace_nbits_from_pos(int num, int n, int pos, int val)
{
	return	((val & ((1 << n) - 1)) << pos - n + 1) |	(num &   ~((~(~0 << n)) << pos - n + 1));


}

//function to toggle the n_bits from the pos
int toggle_bits_from_pos(int num, int n, int pos)
{
	return	(num ^ (((1 << n) - 1) << pos - n + 1));

}

//prints only the n_bits requested by the user
void print_bits(unsigned int num, int n)
{
	unsigned mask;
	putchar('(');
	for (mask = (1 << (sizeof(int) * 8 - 1)); mask; mask >>= 1)
	{
		if (mask <= ((1 << n)-1) )
		{
			if (num & mask) 
			{
				putchar('1');
			}
			else
			{
				putchar('0');
			}
		}
	}
	putchar(')');

}

//print the bits for the value
void print_b(int num)
{
	unsigned mask;

	putchar('(');
	for(mask = (1 << (sizeof(int) * 8 - 1)); mask ; mask >>= 1 )
	{
		(num & mask) ? putchar('1'):putchar('0') ;
	}
	putchar(')');
}
