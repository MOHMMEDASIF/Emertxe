/*
Demo code to reverse the digit
*/
#include<stdio.h>

int main()
{
	int digit,number,actnumber;
	int rev = 0,sum = 0; 

	//prompt the user for the digits
	printf("Enter the digit:");
	scanf("%d", &number);
	actnumber=number;

	if ( number >= 100 && number <= 999 )
	{
		while ( number != 0 )
		{
			digit = number % 10;
			sum = sum + digit * digit * digit ;
			number = number / 10;
		}
		if ( sum == actnumber )
		{
			printf( "It is an Armstrong Number\n");
		}
		else
		{
			printf( "It is not an Armstrong Number\n");
		}

	}
	else
	{
		printf("Invlaid Number\n");
	}
	return 0;

}
