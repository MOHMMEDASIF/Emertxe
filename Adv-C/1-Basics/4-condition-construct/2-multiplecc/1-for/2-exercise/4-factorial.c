/*
Demo code for sum of factorial number
*/

#include<stdio.h>

int main()
{
	int number,i,result = 1;

	//prompt the user for the n
	printf("Enter the Number to calculate factorial :");
	scanf("%d", &number);

	//calculate the sum
	for(i = number; i >= 1; i-- )
	{
		result  = result * i ;
	}

	//print factorial of the number
	printf("Sum of all natural number of [%d] is %d\n", number, result);

	return 0;
}
