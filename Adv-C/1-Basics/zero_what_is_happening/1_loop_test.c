#include <stdio.h>

int main()
{
	#if 0
	//goes into infinite loop
	for(;;);
	{
		printf("Nothing");
	}
	return 0;
	#endif
	
	#if 0
	//error for syntax
	for(  ; )
	{
		printf("Hello");
	}
	#endif

	#if 0
	//infinite loop
	for( ;  ; )
	{
		printf("Hello");
	}
	#endif


	int a = 20,i;
	//#if 0

	for(i = 5; i >= 1; i-- )
	{
						 // sir why am i not getting error here? 
	int a;				// why am i able to declare two varibale with same name inside main function?

		printf("A:%d\n", a); //sir why i am not able to print a = 20 here instead i am getting garbage value?
	}
	//#endif


}
