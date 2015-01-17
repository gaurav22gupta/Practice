#include <stdio.h>
int d[2] = {1,2};

int main()
{

	int i=0;
	int j=!i;
	int ret=0;
	int n=3;
	int k=n-1;
	int arr[1000000]={0};
	for(k=n-1;k>=0;k--){
		for(i=0;i<2;i++)
		{
			j=!i;
			ret = d[i]*k+ (n-1-k)*d[j];
			if(!arr[ret])
			arr[ret]=1;
		}
	}

	for(i=0;i<1000000;i++){
		if(arr[i])
		printf("%d ",i);
		}
	return 0;
}
