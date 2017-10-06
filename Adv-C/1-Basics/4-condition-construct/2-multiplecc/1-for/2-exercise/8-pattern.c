/*
Demo code for the pattern
*/

#include<stdio.h>

int main()
{
	int i,j,k,number;

	//prompt the user for n
	printf("Enter the value of n:");
	scanf("%d", &number);

	//printf the pattern
	for( i = number; i >= 1 ; i-- )
	{
		for(k = i; k < number  ; k++  )
		{
			printf("   ");
	
		}
		for( j = i; j >= 1 ; j--)
		{
			printf(" * ");

		}
		




		printf("\n");
	}

	return 0;
}

