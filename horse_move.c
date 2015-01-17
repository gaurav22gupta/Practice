#include <stdio.h>
#include <malloc.h>

void merge(int *a,int start,int m,int end)
{
	int *tmp = (int *)malloc(sizeof(int) * (end-start+1));
	int i=start,j=m+1;
	for(i=start;i<=end;i++)
		tmp[i] = a[i];
	int count=start;
	i=start;
	while(i <= m && j<= end)
	{
		if(tmp[i] <tmp[j])
			a[count++] = tmp[i];
		else
			a[count++] = tmp[j++];
	}
	if(i<m)
	{
		while(i<=m)
			a[count++] = tmp[i++];
	}
	else
	{
		while(j<=end)
			a[count++] = tmp[j++];
	}
free(tmp);
return;
}

void merge_sort(int *a,int start,int end)
{
	int m=0;
	if((!end-start)) {
	m=(start+end)/2;
	merge_sort(a,start,m);
	merge_sort(a,m+1,end);
	merge(a,start,m,end);
	}

return;
}

int min(int a,int b,int c,int d,int e,int f)
{
	int *tmp = (int *)malloc (sizeof(int) * 6);
	int i=0;
	tmp[0]=a;
	tmp[1]=b;
	tmp[2]=c;
	tmp[3]=d;
	tmp[4]=e;
	tmp[5]=f;

	merge_sort(tmp,0,5);
	return(tmp[0]);
}

int find_path(int arr[][6],int i,int j)
{
	if(i<0 || i>5 || j<0 || j>5)
		return 100000;
	if(i==5 && j==5)
		return 0;
//int ret=0;
		return (min(arr[i][j] + find_path(arr,i+2,j+1),
					arr[i][j] + find_path(arr,i+1,j+2),
					arr[i][j] + find_path(arr,i+1,j-2),
					arr[i][j] + find_path(arr,i-1,j+2),
					arr[i][j] + find_path(arr,i-1,j-2),
					arr[i][j] + find_path(arr,i+2,j-1)));

//return;
}

int main()
{
	int start=0;
	int i=0,j=0;
	int arr[6][6];
	int ret=0;

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			arr[i][j]=1;
	}

	ret=find_path(arr,0,0);
	printf("%d\n",ret);
return 0;
}
