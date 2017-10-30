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
			ir2 = value & (~(~0 << pos2));
			result  =	ir1 | (ir2 << pos1);

			printf("r:%d\n", result);

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

