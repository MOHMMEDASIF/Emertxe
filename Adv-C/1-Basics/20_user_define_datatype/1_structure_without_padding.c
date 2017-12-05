#include <stdio.h>

/*
typedef struct sample
{
	char b;
	char c;
	int a ;
	//char b;

}sample_t;
*/
int main()
{
 struct sample
{
//	char b;
	char c;
	int a ;
	char b;

};

	struct  sample a;
	printf("sizeof(sample_t) : %zu\n", sizeof(a));

	return 0;
}
