/*
 To Print the Grades
*/

#include<stdio.h>

int main()
{
	//declaring the variable
	int num;

	//prompt the user for the input
	printf("Enter the Number:");
	scanf("%d", &num);

	if( num >= 0 && num <= 100 )
	{
		if( num > 90)
		{
			printf("Grade A\n");
		}
		else if( num > 80 && num <= 90)
		{
			printf("Grade B\n");
		}
		else if( num > 70 && num <= 80)
		{
			printf("Grade c\n");
		}
		else if( num > 60 && num <= 70)
		{
			printf("Grade D\n");
		}
		else if( num > 50 && num <= 60)
		{
			printf("Grade E\n");
		}
		else
		{
			printf("Grade F\n");
		}
	}
	else
	{
		printf("NOT AN VALID NUMBER\n");
	}

	return 0;
}
