/*
	demo code for odd or even 
*/

#include<stdio.h>

int main()
{
	int number;

	//prompt the user for number
	printf("Enter the number");
	scanf("%d", &number);



	//validate for odd or even
	switch ( number % 2 )
	{
		case 0 : 
				printf("Number is even\n");
				break;
		default :
				printf("Number is odd\n");
	}

	return 0;
}

