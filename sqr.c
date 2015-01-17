#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
		int T=0,j=0,k=0;
		int i=0,A=0,B=0,res1=0,res2=0;
		int l=0,r=0;
		scanf("%d",&T);
		for(i=0;i<T;i++)
		{

				scanf("%d %d",&A,&B);
		j=A;k=B;
		l=0;r=0;
				while(j!=k)
				{
						res1=sqrt(j);
						res2=sqrt(k);
						if((res1*res1 == j) && (res2*res2==k))
						{	l=1;r=1;		
							break;
						}
						if((res1*res1) != j)
								j++;
						else
							l=1;
						if((res2*res2) != k)
								k--;
						else
							r=1;

				}
				if(!l && !r)
				printf("0\n");
				else if(l^r)
				printf("1\n");
				else
				printf("%d\n",res2-res1+1);
		}
		/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
		return 0;
}
