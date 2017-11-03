#include <stdio.h>
#define KEY_NOT_FOUND -2

void populate(int *a, size_t size);
void reverse_array(int *a,size_t size);
void print_array(int *a, size_t size);

int main()
{
	int index, key;
	int a[5];
	
	populate(a,sizeof(a) / sizeof(int));
	
	puts("Array Before reverse");
	print_array(a,sizeof(a) / sizeof(int));
	

	reverse_array(a,sizeof(a) / sizeof(int));

	puts("Array After reverse");
	print_array(a,sizeof(a) / sizeof(int));

	return 0;
}
void populate(int *a, size_t size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("array[%d]:", i);
		scanf("%d", a + i);
	}
}
void print_array(int *a, size_t size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("array[%d]:%d \n", i, *(a+i));
	}
}
void reverse_array(int *a,size_t size)
{
	int temp, *p = a, *q = a + 4;
	#if 0
	while (p < q)
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	#endif
	while (a < q)
	{
		temp = *a;
		*a++ = *q;
		*q-- = temp;
	}
}
