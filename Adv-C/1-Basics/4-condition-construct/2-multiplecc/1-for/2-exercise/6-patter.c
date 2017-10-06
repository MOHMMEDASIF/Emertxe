/*
Demo code for the pattern
*/

#include<stdio.h>

int main()
{
	int i,j,number;

	//prompt the user for n
	printf("Enter the value of n:");
	scanf("%d", &number);

	//printf the pattern
	for( i = 1; i <= number ; i++ )
	{
		for( j = 1; j <= i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

