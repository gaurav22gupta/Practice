#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int b[5];

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int find_path(int a[][5],int i,int j,int n)
{
	if(i>= 5 || j>=5)
		return 0;
	//return(a[i][j] + max(find_path(a,i+1,j,5),find_path(a,i+1,j+1,5)));
	b[i+1]= a[i][j] + max(find_path(a,i+1,j,5),find_path(a,i+1,j+1,5));
	return b[i+1];

}

bool print_path(int a[][5],int i,int j,int len)
{
	if(i>=5|| j>=5)
	{
	if(len == 0)
		return true;
	else
		return false;
	}
	if(print_path(a,i+1,j,len - a[i][j]))
	{	
		printf("%d ",a[i][j]);
		return true;
	}
	else if(print_path(a,i+1,j+1,len - a[i][j]))
	{
		printf("%d ",a[i][j]);
		return true;
	}
}

int main()
{
int arr[5][5] = {{4, 0, 0, 0, 0},
				 {2, 9, 0, 0, 0},
				 {15,1, 3, 0, 0},
				 {16,92,41,44,0},
				 {8,142,6, 4, 8}
				 };
int len=0;
b[0] = 4;
len = find_path(arr,0,0,5);
printf("%d\n",len);
print_path(arr,0,0,len);
return 0;
}
