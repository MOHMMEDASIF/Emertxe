/*
	Demo code to impliment recursive function
*/

#include <stdio.h>

int main()
{
	int number, power;

	printf("Enter the Number:");
	scanf("%d", &number);
	printf("Enter the power:");
	scanf("%d", &power);

	int res = power_fun(number, power);

	printf("Result: %d\n", res);
}

int power_fun(int n, int a)
{
	if (a  == 0)
	{
		return 0;
	}

	return n * power_fun(n, a - 1);
}
