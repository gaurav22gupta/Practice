#include <stdio.h>

void fun(int arr[][2],int len)
{
		int i=0,j=0;
		int start=0,end=0;
		int l=0;
		int a[20]={0};
		int tmp_start=0,tmp_end=0;

		for(i=0;i<len-1;i++)
		{
				for(j=i+1;j<len;j++)
				{
						tmp_start = min(arr[i][0],arr[j][0]);
						tmp_end = max(arr[j][1],arr[i][1]);
						if(arr[i][1] <= arr[j][1])
						{
								if(arr[i][1] >= arr[j][0])
								{
										if(l < tmp_end-tmp_start){
												start = tmp_start;
												end = tmp_end;
												l=end-start;
												a[start]=end;
										}
										else{
												if(tmp_start > end)
												{
														start = tmp_start;
														end = tmp_end;
														l=end-start;
														a[start]=end;
												}
										}
								}
						}
						else
						{
								if(arr[j][1] >= arr[i][0])
								{
										if(l < tmp_end-tmp_start){
												start = tmp_start;
												end = tmp_end;
												l=end-start;
												a[start]=end;
										}
										else{
												if(tmp_start > end)
												{
														start = tmp_start;
														end = tmp_end;
														l=end-start;
														a[start]=end;
												}
										}
								}
						}

				}
		}

		for(i=0;i<20;i++)
		{
				if(a[i])
						printf("{%d,%d}\n",i,a[i]);
		}
		return ;
}

int main()
{
		int arr[7][2] = {{2,10}, {5,7},{4,6},{5,11},{6,8},{13,15},{14,19}};

		fun(arr,7);

		return 0;
}
