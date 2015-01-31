#include<stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	int i=0;
	int n = atoi(argv[1]);
	srand(time(NULL));
	for(i=0;i<n;i++)
	printf("%d\n",rand()%n);
	return 0;
	}
