/*
   Class Test
 */

#include <stdio.h>
#define ARRAY_MAX			 12
#define MAX_THETA_LIMIT		360
#define VALID				  1
#define INVALID				 -1


int isvalid(int n);
int fact(int n);
int pow_cal(int theta, int n);
float sin_cal(int theta);
int isodd(int theta);
int theta_validate(int valid_theta, int starting_theta);
int isvalid_theta(int theta,int valid_theta, int starting_theta);


int main()
{
	int i, theta, limit_of_sin, validate_theta = 60, starting_theta = 0;
	float array[ARRAY_MAX];

	//calculating the sin values for the array less than 360
	for(i = 0; i < ARRAY_MAX / 2; i++)
	{


		theta = theta_validate(validate_theta, starting_theta);

		if (theta > 0)
		{


			if (theta < validate_theta && theta < MAX_THETA_LIMIT)
			{
				//storing the value of each n
				array[i] = sin_cal(theta);

			}
		}
		else
		{
			puts("INVALID ENTRY...");
			return -1;
		}

		validate_theta += 60;
		starting_theta += 60;
	}


	for(i = 0; i < ARRAY_MAX / 2; i++)
	{
		printf("a[%d]:%f\n", i,array[i] );
	}

	return 1;
}

int theta_validate(int valid_theta, int starting_theta)
{
	int theta, status;

	printf("Enter the Theta value:");
	scanf("%d", &theta);

	status = isvalid_theta(theta, valid_theta, starting_theta);

	if(status == INVALID)
	{
		printf("INVALID ENTRY....");
		return -1;
	}

	status = isodd(theta);

	if(status == INVALID)
	{
		printf("INVALID ENTRY....");
		return -1;
	}

	return theta;


}


int isvalid_theta(int theta,int valid_theta, int starting_theta)
{
	return (theta > starting_theta && theta <= valid_theta)? VALID:INVALID;
}

int isodd(int theta)
{
	return (theta % 2 == 0)? INVALID: VALID; 
}


float sin_cal(int theta)
{
	int i, n, status, count = 1;
	float sum = 0.0;

	//prompt the user for the n value
	printf("Enter the Value of n:");
	scanf("%d", &n);

	status = isvalid(n);

	if (status == INVALID)
	{
		printf("Number should be less than 9 and odd\n");
		return -1;
	}

	for(i = 1; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			if(count % 2 != 0)
			{
				sum = sum + (pow_cal(theta,i) / fact(i));
				printf("sum:%f, count:%d, i:%d\n", sum,count,i);
			}
			else
			{
				sum = sum - ((float) pow_cal(theta,i) / fact(i));
				printf("sum:%f, count:%d, i:%d\n", sum,count,i);
			}

		count++;
		}

	}

	return sum;

}

int pow_cal(int theta, int n)
{
	int value, i;

	value = theta;

	for(i = 1; i < n; i++)
	{
		value = theta * value;  
	}

	return value;
}

int fact(int n)
{
	if (n == 0 | n == 1)
	{
		return 1;
	}
	return n * fact(n-1);
}

int isvalid(int n)
{
	return (n >= 1 && n <= 9)? VALID:INVALID ; 
}
