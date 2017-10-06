/*
Demo code to print sum of all the digits
*/

#include<stdio.h>

int main()
{
	int sum;
	int number;

	//prompt the user for the digit
	printf("Enter the digits to calculate the sum:");
	scanf("%d", &number);

	//calculate the sum of the digit
	for(  sum=0 ; number > 0;  number = number / 10 )
	{
		sum = sum + number % 10;
	}

	printf("sum of the digit %d is %d\n", number, sum);
	return 0;
}
	
