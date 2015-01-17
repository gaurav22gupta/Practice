#include <stdio.h>

int a[255] = {0};


int fib(int n)
{
	if(!a[n])
	{
	//	if(a[n-1] && a[n-2])
	//		a[n] = a[n-1] + a[n-2];
	//	else
			a[n] = fib(n-1) + fib(n-2);
	}
	return a[n];
}		




int main(int argc,char *argv[])
{
	int n=0;
	int i =0;
	if(argc<2)
	{
		printf("Usage:-> ./fib <nth term>\n");
		return 0;
	}

	int arg = atoi(argv[1]);

	a[1] = 1;
	a[2]= 1;
	fib(arg);
	for(i=1;i<=arg;i++)
		printf("%d ",a[i]);

	return 0;
}


