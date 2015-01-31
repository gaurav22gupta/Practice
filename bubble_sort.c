#include <stdio.h>

int main()
{
	int arr[5] = {5,1,3,9,2};

	int i=0,j=0;
	int tmp=0;

	for(i=4;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j+1];
				arr[j+1] =arr[j];
				arr[j] = tmp;
			}
		}
	}

	for(i=0;i<5;i++)
		printf("%d ",arr[i]);

	return 0;
}
