#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

int candies[MAX];
void merge(int beg,int m,int end)
{
		int i=beg;
		int j=0,k=0;
		int count=beg;
		int *tmp = (int *)malloc(sizeof(int)*((end-beg)+1));
		for(i=beg;i<=end;i++)
				tmp[k++]=candies[i];
		i=0;
		end=end-beg;
		int mid=end/2;
		j=mid+1;
		while(i<=mid && j<=end)
		{
				if(tmp[i]<tmp[j])
				{
						candies[count++] = tmp[i++];    
				}
				else
				{
						candies[count++] = tmp[j++];    
				}
		}
		if(i<=mid)
		{
				while(i<=mid)
						candies[count++] = tmp[i++];     
		}
		else
		{
				while(j<=end)
						candies[count++] = tmp[j++];
		}
		free(tmp);
		return;    
}

void merge_sort(int beg,int end)
{
		if((end-beg)){
				int m = (beg+end)/2;
				merge_sort(beg,m);
				merge_sort(m+1,end);
				merge(beg,m,end);
		}
		return;
}
/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/

int main() {

		int N,K;
		int i=0,j=0;

		scanf("%d %d",&N,&K);
		for(i = 0;i < N;i++)
				scanf("%d",candies + i);

		merge_sort(0,N-1);
		for(i=0;i<N;i++)
			printf("%d ",candies[i]);
			printf("\n");
		
		int diff=0;
		int unfairness = 1000000;// Compute the min unfairness over here, using N,K,candies
		int l=0,r=0;
		while(r<(N-1))
		{
				r=(l+K)-1;
				diff = candies[r] - candies[l];
				if(diff<unfairness)
						unfairness=diff;
						l++;
		}


		printf("%d",unfairness);
		return 0;
}
