#include <stdio.h>

/*typedef struct ll{
	int data;
	struct ll *nxt;
	}node;

void func(node **start,int i)
{
	int count =0;

	node *tmp = (node *)malloc(sizeof(node));
	tmp->nxt= NULL;
	
	if(*start == NULL)
	{
		tmp->data=1;
		*start = tmp;
	}
	else
	{
		node *ptr = *start;
		node *next = ptr->nxt;
		if(!next)
		{
			tmp->data = count++;
			ins_at_pos
		while(next!=NULL)
		{	if(ptr->data == next->data)
			{
				count++;
				next = next->nxt;
			}
		}
	}

return;
}
*/
int func( int a[][6],int r,int len)
{
	int j =-1,k=0;
	int count = 1;

	if(!len)
	{
		a[r][++j] = count;
		a[r][++j] = a[r-1][j-1];
	}
	else
	{
		int tmp=0;
		for(k=1;k<=len;k++)
		{
			if(a[r-1][tmp] == a[r-1][k])
			{
				count++;
			}
			else
			{
				a[r][++j] = count;
				a[r][++j] = a[r-1][tmp];
				count=1;
				tmp++;
			}

		}
		a[r][++j]= count;
		a[r][++j]=a[r-1][tmp];

	}

return j;
}

int main(int argc,char *argv[])
{

	int i=0,k=0;
	int N= atoi(argv[1]);

	int a[5][6] = {0};
	a[0][0]=1;

	int len =0;
	for(i=1;i <= N;i++)
	len = func(a,i,len);

	for(k=0;k<=len;k++)
	{
		printf("%d ",a[i-1][k]);
	}
	return 0;
}

