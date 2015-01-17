#include<stdio.h>

int v[6][6] = {0};

int dx[8]={0,1,1, 1, 0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1, 0, 1};

int q[100]={0};
int f=-1;
int r=-1;

void push(int row,int col)
{
		q[++r] = col;
		q[++r]= row;
		v[row][col]=1;

		return;
}

void pop()
{
		f=f+2;	

		return;
}

void bfs(int arr[][6],int rw,int cl)
{
		int i=0;
		int j=0;
		int x=0,y=0;
		int row=0,col=0;


		while(r!=f)
		{
			row = q[f+2];
			col= q[f+1];
			pop();

				for(i=0;i<8;i++)
				{
						x=row+dx[i];
						y=col+dy[i];

						if(arr[x][y] && x>-1 && x<6 && y>-1 && y<6 && !v[x][y])
						{
							printf("pushing %d,%d\n",x,y);
							push(x,y);
						}

				}
		}
			printf("reached dest\n");
		//bfs(arr,r+2,r+1);

		return;
}

int main()
{

		int arr[6][6] = { {1,0,0,0,0,0},
						  {0,1,1,1,0,0},
						  {0,1,0,0,0,0},
						  {0,0,1,1,1,0},
						  {0,0,0,0,0,1}
		};
		push(0,0);
		bfs(arr,0,0);


		return 0;
}
