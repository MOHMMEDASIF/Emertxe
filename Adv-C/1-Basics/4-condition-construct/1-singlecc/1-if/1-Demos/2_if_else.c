/*
	demo code for if_condition
*/

#include<stdio.h>

int main()
{
	//declaration of the number
	int num;

	//prompt the user for the number
	printf("Enter the number:");
	scanf("%d", &num);

	//check the number is multiple of '3' or not
	if ( num % 3 == 0 )
	{
		printf("%d: Multiple of 3\n", num);

	}
	else
	{
		printf("%d: Not Multiple of 3\n", num);
	}

	return 0;

}

