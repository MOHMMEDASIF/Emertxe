/************************************************************************************************************************************************************

Title		: Recursive Factorial
Author		: MOHMMED ASIF.S
Date		: 29/10/2017
description	: using main method execution of the factorial method

************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

static int flag = 1;

int main ( )
{
	static int number;
	static int result = 1 ;

	if (flag)
	{
		printf("Enter the number:");
		scanf("%d", &number);
		flag = 0;
	}
		result = result * number ;
		number--;
		
		if (number != 0)
		{
			main();
		}

		printf(" result:%d", result);
		exit(1);

}
