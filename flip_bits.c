#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	int nu = atoi(argv[1]);
	int res=log2(nu);
	int res2;
	int num,i;

	printf("original number is (%d): ",nu);
	for(i=res;i>=0;i--)
	{
		if(nu&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	num = (1<<(res+1))-1;
	res2 = num^nu;
	printf("flipped number is (%d) :",res);
	for(i=res;i>=0;i--)
	{
		if(res2&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
	}

