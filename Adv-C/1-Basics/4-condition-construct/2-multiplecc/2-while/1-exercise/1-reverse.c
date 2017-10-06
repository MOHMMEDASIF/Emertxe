/*
Demo code to reverse the digit
*/
#include<stdio.h>

int main()
{
	int digit,number;
	int rev = 0; 

	//prompt the user for the digits
	printf("Enter the digit:");
	scanf("%d", &number);

	while ( number != 0 )
	{
		digit = number % 10;
		rev = rev * 10 + digit ;
		number = number / 10;
	}
	printf("Revese digit is %d\n", rev);
	return 0;
}
