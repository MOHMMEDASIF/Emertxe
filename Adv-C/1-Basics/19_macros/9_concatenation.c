#include <stdio.h>
#define COM(a, b) a##b

int main()
{

	int int_var = 10;


	printf("%d\n", COM(int, _var));
	return 0;
}
