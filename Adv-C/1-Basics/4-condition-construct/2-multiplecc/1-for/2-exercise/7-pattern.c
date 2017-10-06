/*
Demo code for the pattern
*/

#include<stdio.h>

int main()
{
	int i,j,k,l,number;
	int count=0;

	//prompt the user for n
	printf("Enter the value of n:");
	scanf("%d", &number);

	//printf the pattern
	for( i = 1; i <= number ; i++ )
	{
		for( j = number ; j >= i  ; j-- )
		{
			printf(" * ");
		}

		for (l = 0 ; l < count   ; l++  )
		{

			printf("   ");
		}
		for( k = number ; k >= i ; k--)
		{
			printf(" * ");
		}


		count = count+2;
		printf("\n");
	}

	return 0;
}

