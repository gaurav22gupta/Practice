#include <stdio.h>
#include <string.h>
//#include<file.h>

void fun(int a,int b)
{
		int j=a;
		int k=b;
		int res1=0,res2=0;
		int l=0,r=0;
		if(a==b)
		{
			res1 = sqrt(a);
			if(res1*res1 ==a)
				printf("1\n");
		}
		else{
		while(j!=k)
		{
				res1=sqrt(j);
				res2=sqrt(k);
				if((res1*res1 == j) && (res2*res2==k))
				{l=1;r=1;		break;}
				if((res1*res1) != j)
						j++;
				else
					l=1;
				if((res2*res2) != k)
						k--;
				else
					r=1;
		}
		if(!l && !r)
			printf("0\n");
		else if(l^r)
			printf("1\n");
		else
		printf("%d\n",res2-res1+1);
		}
		return;
}

int main()
{
		int data=0;
		FILE *fp;
		char line[100]={'\0'};
		int ret=0;
		int i=0,j=0,T=100;
		char *ptr;
		int A[2]={0};
		char *p= (char *)malloc(50);
		fp=fopen("sample.txt","r");
		for(i=0;i<T;i++){
				while(fgets(line,50,fp)){
						strncpy(p,line,strlen(line));
						ptr=strtok(p," ,\n");
						j=0;
						while(ptr!=NULL)
						{
								A[j]=atoi(ptr);
						//		printf("%d\n",A[j]);
								ptr= strtok(NULL," ");
								j++;
						}
						fun(A[0],A[1]);
				}
		}
		return 0;
}
