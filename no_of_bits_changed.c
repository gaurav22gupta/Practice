#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int c=0;
	c = a ^ b;
	int k= log(c);

	int i=0,count=0;
	for(i=k;i>=0;i--)
	{
		c=c>>1;
		if(c&1)
			count++;
	}

	printf("count = %d\n",count);

	return 0;
}
