#include <stdio.h>
int cur_count =-1;

char * func(char *a,int cur_count,int n,int len)
{
	int j =-1,k=0;
	int count = 1;
	if(cur_count == n)
		return NULL;
	char *ch = NULL;
	if(!len)
	{
		ch = (char *)malloc(2);
		//ch[++j] = count;
		sprintf(ch[++j],"%d",count);
		ch[++j] = a[0];
		cur_count++;
		ch = func(ch,cur_count,n,j);
	}
	else
	{
		int tmp=0;
		ch = (char *)malloc(2);
		for(k=1;k<=len;k++)
		{
			if(a[tmp] == a[k])
			{
				count++;
			}
			else
			{
				ch = (char *)realloc(ch,2*(tmp+1));
			//	ch[++j] = count;
				sprintf(ch[++j],"%d",count);
				ch[++j] = a[tmp];
				count=1;
				tmp++;
			}

		}

		ch = (char *)realloc(ch,2*(tmp+1));
		sprintf(ch[++j],"%d",count);
		//ch[++j] = count;
		ch[++j]=a[tmp];
		ch = func(ch,cur_count,n,j);

	}

return ch;
}

int main(int argc,char *argv[])
{

	int i=0,k=0;
	int N= atoi(argv[1]);

	int a[50] = {0};
	char c[1] = {'1'};
	char *str = NULL;
	int len =0;
	//for(i=1;i <= N;i++)
	str = func(c,cur_count,N,len);

		printf("%s ",str);
	return 0;
}

