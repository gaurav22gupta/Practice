#include <stdio.h>

int main()
{
 int n=-2;
	int r=0;
	printf("%x\n",n);
	int mask = n>>31;
	printf("%x\n",mask);
	r = (n^mask)-mask;
	printf("r=%d\n",r);

	return 0;
	}

