/*
 demo code for fibonacci series
*/

#include<stdio.h>

int main()
{
	int sum = 1;
	int i,limit,prev,nxt;


	//prompt the user for the limit
	printf("Enter the limit to print fibonacci series:");
	scanf("%d", &limit);

	printf("0\n");
	//printf("1\n");
	//calculate the fibonacci
	for( prev = 0, nxt = 1; nxt  <= limit; ) 
	{
		
		printf("%d\n", sum);
		sum  = prev + nxt;
		prev = nxt;
		nxt = sum;
	}

	return 0;
}

