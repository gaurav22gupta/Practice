#include <stdio.h>

int main()
{
	int mask=1;
	int arr[4]= {1,2,3,4};
	int num=0;
	int i=0,j=0;
	for(i=1;i<(1<<4);i++)
	{
		num=i;
		j=0;
		while(j!=4){
			if((mask&num))
			{		
				printf("%d ",arr[j]);
			}
				j++;
				num=num>>1;
		}
		printf("\n");
	}
return 0;		
}
