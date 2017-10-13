#include<stdio.h>

int main()
{
	int num;
	unsigned int mask;

	//prompt the user for the number
	printf("Enter the Number:");
	scanf("%d", &num);

	//logic to convert dec to binary
	for(mask = 1 << ((sizeof(int) << 3) - 1); mask ; mask >>= 1)
	{
		num & mask ? putchar('1'): putchar('0');
	}
	putchar('\n');

	return 0;
}
