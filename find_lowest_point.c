#include <stdio.h>


int main()
{

int arr[18] = {0, 10, 20, 10, 30, 40, 50, 40, 30, 20, 10, 20, 30, 40, 50, 60, 50, 60};

int i=0;

for(i=0;i<18;i++)
{
	if(!i)
	{
		if(arr[0] < arr[1])
		{	
			printf("%d\n",arr[0]);
			continue;
		}
	}
	if(i ==17)
	{
		if(arr[i] < arr[i-1])
		{
			printf("%d\n",arr[i]);
			break;
		}
	}
		if((arr[i] < arr[i+1]) &&( arr[i] < arr[i-1]))
		printf("%d\n",arr[i]);
}
return 0;
}
