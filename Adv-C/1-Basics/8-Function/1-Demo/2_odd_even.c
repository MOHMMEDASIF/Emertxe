/*
	code to execute odd or even using function and macros
*/

#include<stdio.h>
#define EVEN 0
#define ODD 1

int is_even_odd(int);

int main()
{
	int num, status;

	//prompt the user for the number
	printf("Enter the number:");
	scanf("%d", &num);

	status = is_even_odd(num);

	if(ODD == status)
	{
		printf("%d is an odd number\n", num);
	}
	else
	{
		printf("%d is an Even Number\n", num);
	}
	

	return 0;
}

int is_even_odd(int num)
{
	return (num % 2)? ODD : EVEN;
}
