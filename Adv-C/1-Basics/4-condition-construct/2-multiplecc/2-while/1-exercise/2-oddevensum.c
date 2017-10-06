/*
Demo code to reverse the digit
*/
#include<stdio.h>

int main()
{
	int digit,number;
	int rev = 0; 
	int oddsum = 0, evensum = 0;

	//prompt the user for the digits
	printf("Enter the digit:");
	scanf("%d", &number);

	while ( number != 0 )
	{
		digit = number % 10;
		//rev = rev * 10 + digit ;
		if( digit % 2 == 0)
		{
			evensum = evensum + digit; 
		}
		else
		{

			oddsum = oddsum + digit; 
		}
		number = number / 10;
	}
	printf("even-sum is %d\n", evensum);
	printf("odd-sum is %d\n", oddsum);

	return 0;
}
