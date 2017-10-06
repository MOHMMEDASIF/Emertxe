/*
   Execrises program to perform arithematic operation
 */

#include<stdio.h>

int main()
{
	int num1,num2,result,flag = 1;
	char op;
	char option;

	do
	{
		//prompt the user for number 1
		printf("\n\nEnter the Value of Number 1:");
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

		//print the result
		printf("Result of %d %c %d is %d\n", num1, op, num2, result);

		//get the user option to exit or to continue
		printf("\n\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');

	return 0;
}
