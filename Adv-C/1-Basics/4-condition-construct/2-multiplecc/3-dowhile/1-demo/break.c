/*
demo code to impliment break
*/

#include <stdio.h>

int main()
{
	int upper, lower, flag=0, i, j;

	printf("Enter the lower- limit:");
	scanf("%d%d", &lower, &upper);

//	printf("Enter the upper-limit:");
//	scanf("%d", &upper);


	for (i = lower; i <= upper; i++)
	{
		flag = 0;
		for (j = 2; j < i; j++ )
		{
			if(i % j == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0 )
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

