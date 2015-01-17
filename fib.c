#include <stdio.h>
#include <malloc.h>

//int f[50] = {0};

int fib(int n,int *f)
{
	if(!n)
		return 0;
	if(n>0 && n<2)
		return 1;
	else if (!f[n])
	{
		f[n]= fib(n-1,f) + fib(n-2,f);
	}
	else
		return f[n];

return f[n];
}
	

int main(int argc,char *argv[])
{
	int n = atoi(argv[1]);
	int i=0;
	int *f= (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		f[i]=0;

	f[1] = 1;
	i=0;
	int ret = fib(n,f);
	while(i<=n)
	printf("%d ",f[i++]);
	free(f);
	return 0;
	}
