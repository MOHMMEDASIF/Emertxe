/*
 Demo code for dispalying Multiple of given number upto an given limit
*/

#include<stdio.h>

int main()
{
	int result,value,limit,i;

	//prompt the user for the value and the limits
	printf("Enter the number to display the tables :");
	scanf("%d", &value);

	printf("Enter the limit to display:");
	scanf("%d", &limit);

	//printing the multiplication table 
	for(i = 1; i <= limit; i++)
	{
		//result = value * i ;
		printf("%d * %d = %d\n", value, i, value * i);
	}

	return 0;
}


