/*
Demo code for sum of n natural number
*/

#include<stdio.h>

int main()
{
	int number,i,sum = 0;

	//prompt the user for the n-value
	printf("Enter the Number to calculate sum :");
	scanf("%d", &number);

	//calculate the sum
	for(i = number; i >= 1; i-- )
	{
		sum = sum + i;
	}

	//print sum of n-natural number
	printf("Sum of all natural number of [%d] is %d\n", number, sum);

	return 0;
}
