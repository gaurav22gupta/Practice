#include <stdio.h>

int main()
{
	int a=5;
	int b=50;
	int c=a;

	while(a)
	{
		c=a;
		a=b%a;
		b=c;
	}
	printf("GCD(5,50) : %d\n",b);
	return 0;
	}
