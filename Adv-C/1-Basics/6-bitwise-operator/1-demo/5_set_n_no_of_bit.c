#include<stdio.h>

int main()
{
	int num;
	unsigned  nth;
	unsigned int mask;

	//prompt the user for the number
	printf("Enter the Number:");
	scanf("%d", &num);
	
	//prompt the user for the nth bit to set
	printf("Enter the nth bit to set");
	scanf("%d", &nth);

	if( nth > 0 && nth <32 )
	{
	//logic to convert dec to binary
	for(mask = 1 << ((sizeof(int) << 3) - 1); mask ; mask >>= 1)
	{
		num & mask ? putchar('1'): putchar('0');
	}
	putchar('\n');

	num = num | (~(~0 << nth));

	for(mask = 1 << ((sizeof(int) << 3) - 1); mask ; mask >>= 1)
	{
		num & mask ? putchar('1'): putchar('0');
	}
	putchar('\n');


	}
	else
	{
		puts("Invalid nth bit ");
	}

	return 0;
}
