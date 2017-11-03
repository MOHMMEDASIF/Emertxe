/***********************************************************************************************************************************************************

Title		: Bitwise_lsb
Author		: MOHMMED ASIF.S
Date		: 16/10/2017
Description	: changing the bit of number from the given pos1 to pos 2 with the pos2 of the value
				Example: number_in_bin = 0001 (to_be_changed)011(to_be_changed)0 
						 value_in_bin = 00001(get_the_value)010(get_the_value) 
						 pos1 = 1  
						 pos2 = 3
						 result = 0001(bit from value)010(bit from value)0
************************************************************************************************************************************************************/
#include<stdio.h>

int main()
{
	int ir1,ir2,result, num, value, pos1, pos2;

	//prompt the user for the Number
	printf("Enter the Number:");
	scanf("%d", &num);

	//prompt the user for the value
	printf("Enter the Value:");
	scanf("%d", &value);

	//prompt teh user for the pos1
	printf("Enter the Value of pos1:");
	scanf("%d", &pos1);

	//validate the pos 1
	if( pos1 >= 0 && pos1 <= 31 )
	{
		//prompt the user for the pos2
		printf("Enter the Value of pos2:");
		scanf("%d", &pos2);

		//validate for pos2
		if( pos2 >= 0 && pos2 <= 31 )
		{
			ir1 = num & (~(~(~0 << pos2 - pos1 + 1) << pos1));
			ir2 = value & (~(~0 << pos2 - pos1 + 1));
			result  =	ir1 | (ir2 << pos1);

			printf("result:%d\n", result);

		}
		else
		{
			puts("Invalid Input");
		}
	}
	else
	{
		puts("Invalid Input");
	}

	return 0;
}

