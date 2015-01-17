#include <stdio.h>

int main(int argc,char *argv[])
{
	int num= atoi(argv[1]);
	int bit=0,num1=0;
	printf("enter the bit to be cleared : ");
	scanf("%d",&bit);
	num1 = (num & ~(1<<bit));
	printf("new num is %d\n",num1);

	printf("enter the bit to be set : ");
	scanf("%d",&bit);

	num = num | (1<<bit);
	printf("new num is %d\n",num);

	return 0;
}
