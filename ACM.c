#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count(char *a,char *b,int len)
{
	int i=0;
	int ret=0;
	for(i=0;i<len;i++)
	{
		if((a[i] | b[i]) == '1')
			ret++;
	}

	return ret;
}

int main() {
		int N,M;
		scanf("%d %d",&N,&M);
		int i=0,j=0;
		int ones_count=0;
		int team_count=0;
		char *str[500];

		for(i=0;i<N;i++){
			str[i] = (char *)malloc(sizeof(char) * M);
			scanf("%s",str[i]);
		}

		printf("***************\n");

		int max=-1;
		for(i=0;i<N-1;i++)
		{
			for(j=i+1;j<N;j++){
				ones_count = count(str[i],str[j],M);
				if(max<=ones_count)
				{
					if(max == ones_count)
						team_count++;
					else
						team_count=1;
					max = ones_count;
				}
			}
		}

		printf("\n%d %d\n",max,team_count);
		/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
		

		for(i=0;i<N;i++)
		{
		free(str[i]);
		}
		return 0;
}

