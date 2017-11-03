#include <stdio.h>
#define KEY_NOT_FOUND -2

void populate(int *a, size_t size);
void print_array(int *a, size_t size);
void count_even_odd(int *a,size_t size,int *b,size_t sizeofb );

int main()
{
	int a[5], b[2] = {0, 0};
	
	populate(a,sizeof(a) / sizeof(int));
	
	puts("Array Before reverse");
	print_array(a,sizeof(a) / sizeof(int));
	
	count_even_odd(a,sizeof(a) / sizeof(int), b, sizeof(b) / sizeof(int) );


	printf("\nTOTAL EVEN COUNT in ARRAY is %d\n", *(b + 0));
	printf("\nTOTAL ODD COUNT in ARRAY is %d\n", *(b + 1));
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
void count_even_odd(int *a,size_t size,int  *b,size_t sizeofb )
{
	int i;

	for(i = 0; i < size; i++)
	{
		if ( (*(a + i)) % 2 == 0)
		{
			(*(b + 0))++;
		}
		else
		{
			(*(b + 1))++;
		}

	}

//	printf("\nTOTAL EVEN COUNT in ARRAY is %d\n", *(b + 0));
//	printf("\nTOTAL ODD COUNT in ARRAY is %d\n", *(b + 1));
}
