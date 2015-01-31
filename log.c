#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	float nu = (float)atoi(argv[1]);
	float res=log2(nu);
	printf("%f\n",res);
	return 0;
	}

