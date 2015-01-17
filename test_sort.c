#include <stdio.h>

int main()
{
	int arr[5] = {5,2,9,16,3};
	merge(arr,0,4);
	int i=0;
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	return 0;
	}
