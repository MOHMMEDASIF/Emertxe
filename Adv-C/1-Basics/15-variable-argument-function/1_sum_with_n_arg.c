#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);

int main()
{
	int sum;
	
	sum = add(2, 10, 20);
	printf("1_call sum :%d\n", sum);

	sum = add(4, 5, 10, 15, 20);
	printf("2_call sum :%d\n", sum);

	sum = add(5, 1, 2, 3, 4, 5);
	printf("3_call sum :%d\n", sum);


	return 0;
}

int add(int count, ...)
{
	//declare a pointer of type va_list;
	va_list ap;
	int result = 0;

	//Initialize the pointer
	va_start(ap, count);

	//add value one by one
	int i;

	for(i = 0; i < count; i++)
	{
		result = result + va_arg(ap, int);

	}

	va_end(ap);

	return result;
}
