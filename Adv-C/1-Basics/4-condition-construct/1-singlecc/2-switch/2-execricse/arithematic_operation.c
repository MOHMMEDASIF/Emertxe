/*
	Execrises program to perform arithematic operation
*/

#include<stdio.h>

int main()
{
	int num1,num2,result,flag = 1;
	char op;

	//prompt the user for number 1
	printf("Enter the Value of Number 1:");
	scanf("%d", &num1);

	//prompt the user for number2
	printf("Enter the Value of Number 2:");
	scanf("%d", &num2);

	//prompt the user for the operator
	printf("Enter the arithematic operation to perform[+,-,/,*]:");
	scanf("\n%c", &op);

	//validate the operator
	switch ( op )
	{
		case '+': 
				result = num1 + num2;
				break;

		case '-': 
				result = num1 - num2;
				break;

		case '/': 
				result = num1 / num2;
				break;

		case '*': 
				result = num1 * num2;
				break;

		default :
				//flag = 0;
				printf("Invalid operator\n");
				return 1;
				
	}

//	if ( flag )

	printf("result of %d %c %d is %d\n", num1, op, num2, result);

	return 0;
}
