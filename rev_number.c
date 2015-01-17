#include <stdio.h>

int main(int argc,char *argv[])
{
int arr[4]= {0};
int i=0;
int dig =0;
int n=0;
int num = atoi(argv[1]);

while(num)
{
	dig = num%10;
	num = num/10;
	n = n*10 + dig;
}

	printf("%d",n);

return 0;
}
