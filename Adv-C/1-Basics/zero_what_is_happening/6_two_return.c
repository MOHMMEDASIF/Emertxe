#include <stdio.h>

int addmul(int ii, int jj)
{
	int kk, ll;
	kk = ii + jj;
	ll = ii * jj;

	return (kk, ll);
}


int main()
{
	int k, l;

	k = addmul(3, 4);
	l = addmul(3, 4);

	printf("%d %d\n", k, l);

	return 0;
}
