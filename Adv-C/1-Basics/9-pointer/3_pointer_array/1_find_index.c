#include <stdio.h>
#define KEY_NOT_FOUND -2

void populate(int *a, size_t size);
int find_key(int *p, size_t size, int key);

int main()
{
	int index, key;
	int a[5];
	
	populate(a,sizeof(a) / sizeof(int));
	
	printf("Enter the Key:");
	scanf("%d", &key);

	index = find_key(a, sizeof(a) / sizeof(int), key);

	if (index == KEY_NOT_FOUND)
	{
		puts("KEY NOT FOUND");
	}
	else
	{
		printf("\na[%d] has %d\n",index, key );
	}
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
int find_key(int *p, size_t size, int key)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if (key == *(p + i))
		{
			return i;
		}
	}
	return KEY_NOT_FOUND;
}
