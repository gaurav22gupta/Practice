#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>

bool is_sqr(int n)
{   
		int ret=sqrt(n);
		return((ret*ret) == n);
}

int main() {
		int T=0;
		int i=0;
		int n=0;

		scanf("%d",&T);
		if(T<1 && T>100000)
				return -1;
		for(i=0;i<T;i++)
		{
				scanf("%d",&n);
				if(n<1 && n>10000000000)
						return -1;
				if(is_sqr(5*n*n+4) || is_sqr(5*n*n-4))
						printf("IsFibo\n");
				else
						printf("IsNotFibo\n");

		}
		/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
		return 0;
}
