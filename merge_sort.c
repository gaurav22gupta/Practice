#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

void merge_sort(int *arr,int beg,int m,int end)
{
	int i=beg;
	int j=m+1,k=0;
	int count=beg;
	int *t = (int *)malloc(sizeof(int) * ((end-beg) + 1));
	for(i=beg;i<=end;i++)
		t[k++] = arr[i];
	i=0;
	end = end-beg;
	int mid= end/2;
	j=mid+1;
	while(i <= mid && j<=end)
	{
		if(t[i] < t[j])
			arr[count++] = t[i++];
		else
			arr[count++] = t[j++];
	}
	if(i==mid+1)
	{
		while(j<=end)
			arr[count++]= t[j++];
	}
	else
	{
		while(i<=mid)
			arr[count++]= t[i++];
	}

free(t);	
return;
}

void merge(int *arr,int start,int end)
{
	if(!(end-start))
		return;
	int m = (start + end )/ 2;
	merge(arr,start,m);
	merge(arr,m+1,end);
	merge_sort(arr,start,m,end);

return;
}

bool isChar(char a)
{
	if((a>=65 && a<=90) || (a>=97 && a<=122))
		return true;
	else
		return false;

}
bool isDigit(char a)
{
	if(a>=48 && a<=57)
		return true;
	else
		return false;

}

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int max_of_array(int *arr,int len)
{
	merge(arr,0,len-1);
	return(arr[len-1]);
}

int min_of_array(int *arr,int len)
{
	merge(arr,0,len-1);
	return(arr[0]);
}
