/***********************************************************************************************************************************************************

Title		:To check the Given Number Sign and print whether the given number is odd or even followed by Sign
Author		:Mohmmed Asif.S
Date		:28/09/2017
Description	:Validate the number between 100 to 999 and -999 to -100
			 if Even number print "Even Number with Sign"
			 if Odd number print "Odd Number With sign"

************************************************************************************************************************************************************/

//header files
#include<stdio.h>

int main()
{
	//declaration of the int Variable
	int number;
	int flag=0;

	//prompt the user for the Number
	printf("Enter the Number:");
	scanf("%d", &number);

	//validates for valid-number
	if ((number >= 100 && number <= 999) || (number <= -100 && number >= -999))
	{
		if(number > 0 )
		{
			number = number;
			flag = 0;
		}
		//if number - then multiply with -1 to make postive
		else
		{
			number = number * -1;
			flag = 1;
		}
		
		//prints the valid output
		if(number % 2 == 0 && flag == 1)
		{
			printf("Negative Even Number\n");
		}
		else if(number % 2 == 0 && flag == 0)
		{
			printf("Positive Even Number\n");
		}
		else if(number % 2 != 0 && flag == 1)
		{
			printf("Negative Odd Number\n");
		}
		else if(number % 2 != 0 && flag == 0)
		{
			printf("Positive Odd Number\n");
		}

		


	}
	else
	{
		printf("INVALID INPUT.....\nTRY AGAIN!!!!\n");
	}

	return 0;
}


