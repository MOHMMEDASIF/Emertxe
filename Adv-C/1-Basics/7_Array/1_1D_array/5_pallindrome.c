/*
Demo code to impliment 1-d array
*/

#include<stdio.h>

int main()
{
	//declare an array
	char a[5];
	int i,j,flag = 0;
	
	//printf
	puts("Enter the character");

	//read an array
	for(i = 0 ; i < sizeof(a) / sizeof(char); i++)
	{
		scanf("\n%c", &a[i]);
	}

	i = 0;
	j = sizeof(a) / sizeof(char) - 1;
	//logic for pallindrome
	while(i < j)
	{
			if ( a[i]  !=  a[j])
			{
				flag = 1;
				break;
			}

			i++;
			j--;
	}

	if (flag)
	{
		printf("It is not a pallindrome\n");
	}
	else
	{
		printf("It is  pallindrome\n");
	}

	return 0;
}
