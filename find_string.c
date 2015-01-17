#include <stdio.h>

int dx[8] = {0,1,1, 1, 0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1, 0, 1};

char *str[5] = {"acprc",
		"xsopc",
		"vovni",
		"wgfmn",
		"qatit"};

char *m = "microsoft";
int index=0;
int v[5][5] = {0};
char q[25] = {'\0'};

int top = -1;
//int rear =-1;

void push(int r,int c)
{
	q[++top] = str[r][c];	
	v[r][c] =1;
	index++;
}

void pop()
{
	top--;
	index--;
}

void bfs(int row,int col)
{
	int k=0;
	int xi = 0;
	int yi = 0;

	push(row,col);
	if(index==9)
		return;
	for(k=0;k<8;k++)
	{
		xi = row + dx[k];
		yi = col + dy[k];
		
		if(xi>-1 && xi<5 && yi > -1 && yi<5)
		{
			if(str[xi][yi] == m[index] && (!v[xi][yi]))
			{
				bfs(xi,yi);
			}
		}
		if(index==9)
			break;			
	}
	if(k==8)
		pop();
return;
}

int main()
{
	int i=0,j=0,k=0;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(str[i][j] == m[0])	//found 'm' of "microsoft"
			{
				bfs(i,j);
			}
		}
	}

	for(i=0;i<=top;i++)
		printf("%c",q[i]);

	return 0;
}
