/*
	Demo code to add two numbers using fuctions
*/

#include<stdio.h>

//function prototype or declaration or signature
void add_two_ints(int num1, int num2);

int main()
{
	int num1, num2;

	//prompt the user for the number 1 and number 2 and store in variable num1 and num2
	printf("Enter the number 1:");
	scanf("%d", &num1);
	printf("Enter the number 2:");
	scanf("%d", &num2);

	//function called
	add_two_ints(num1, num2);
	
	return 0;

}

//defining the function
void add_two_ints(int num1, int num2)
{
 
	int sum = num1 + num2;

	printf("sum of is %d\n", sum);
}
