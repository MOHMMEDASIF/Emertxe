/*
	Demo code for the fibonacci series using function
*/

#include<stdio.h>

void fibonacci(int);

int main()
{
	int num;

	//prompt the user for the number
	printf("Enter the number:");
	scanf("%d", &num);

	//function calling for printing fibonacci_series
	fibonacci(num);

	return 0;
}

void fibonacci(int num)
{
	int i,sum,first = 0,second = 1;

	printf("0\t1\t");
	for(i = 2; i <= num ; i++)
	{
		sum = first + second;
		if(sum <= num)
		{
			printf("%d\t", sum);
		}
		else
		{
			break;
		}
		first = second;
		second = sum;

	}
	printf("\n");
}
