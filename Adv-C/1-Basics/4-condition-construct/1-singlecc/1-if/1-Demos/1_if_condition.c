/*
	demo code for if_condition
*/

#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number:");
	scanf("%d", &num);

	( num % 3 )? printf("%d:Not Multiple of 3\n", num):printf("%d: Multiple of 3\n", num);

	return 0;

}

