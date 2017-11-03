#include <stdio.h>

void populate(int *a, size_t size);
void print_array(int *a, size_t size);
void move_one_index(int *a, size_t size, int  index, int item);

int main()
{
	int a[5], item, index;

	a[4] = 0;
	
	populate(a,sizeof(a) / sizeof(int));
	
	puts("Array Before reverse");
	print_array(a,sizeof(a) / sizeof(int));

	printf("Enter the Item:");
	scanf("%d", &item);

	index = find_index(a, sizeof(a) / sizeof(int), item);
	move_one_index(a, sizeof(a) / sizeof(int), index, item);
 
	printf("Index VAlue: %d", index);

	return 0;
}
void populate(int *a, size_t size)
{
	int i;
	for(i = 0; i < size - 1; i++)
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
int find_index(int *a, size_t size, int item)
{
	int i;

	for(i = 0; i <= size; i++)
	{
		if ( item >= *(a + i))
		{
			if (item < *(a + (i+1)))
			{
				return i;
			}
		}
		
	}

}
void move_one_index(int *a, size_t size, int  index, int item )
{
	int	limit = index + 1;

	int i, b[size];
	for(i = 0; i < limit; i++)
	{
		b[i] = a[i];

	}
		b[limit] = item;

	for(i = limit ; i < size; i++)
	{
		b[i+1] = *(a + i); 

	}

	puts("Array inside move_one_index");
	print_array(b,sizeof(b) / sizeof(int));

}
