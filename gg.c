#include <stdio.h>

int main()
{
	char s[4] = {'1','0','0','1'};
	char t[4] = {'0','0','1','1'};

	int i=0;
		for(i=0;i<4;i++)
		printf("%c ",s[i]|t[i]);
		return 0;
		}
