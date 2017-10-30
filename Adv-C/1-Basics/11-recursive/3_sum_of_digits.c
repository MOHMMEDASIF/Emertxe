/*
	Demo code to impliment recursive function
*/

#include <stdio.h>

int main()
{
	int number;

	printf("Enter the Number:");
	scanf("%d", &number);

	int res = sum(number);

	printf("Result: %d\n", res);
}

int sum(int n)
{
	if (n  == 0)
	{
		return 0;
	}

	return (n % 10) + sum(n / 10);
}
