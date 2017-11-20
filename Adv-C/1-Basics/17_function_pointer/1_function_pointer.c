#include <stdio.h>

int sum(int , int);
int sum(int a, int b)
{
	return a +b;
}

int main()
{
	int (*fp)(int , int);
	fp = sum;

	//int result = fp(5, 10);
	int result = (*fp)(5, 10);

	printf("%p\n", fp);
	fp++;
	printf("%p\n", fp);
	printf("Result: %d\n", result);


	return 0;
}
