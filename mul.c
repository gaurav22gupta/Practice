#include <stdio.h>

int mul(int a,int b)
{
	int i=0;
	int res=0;
	for(i=0;i<a;i++)
	{
		res = res+b;
	}

return res;
}

int main()
{

	int a = 10;
	int b = 9;

	int ret = mul(a,b);
	printf("result is %d\n",ret);

	return 0;
}
