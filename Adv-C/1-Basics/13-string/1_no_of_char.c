#include <stdio.h>
#include <string.h>

//int count_of_string(size_t size);
int main()
{
	char string[20];
	
	//prompt the user to enter the input
	printf("Enter the Name:");
	//scanf("%[^\n]", string);//takes n_number of characters and tring to fit in the size but overflow is occurs
	fgets(string, 20, stdin);

	size_t size =strlen(string);

	printf("Length of %s is %zu\n", string, size);
	printf("Sizeof name is %d\n", sizeof(string) );
}

#if 0
size = count_of_string(char name,sizeof(name) / sizeof(char));

	printf("No.of characters:%d \n", size);
	return 0;
}

int count_of_string(size_t size)
{
	return size ;
}
#endif
