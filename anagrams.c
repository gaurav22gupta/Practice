#include <stdio.h>


int main()
{

char *str = "abad";
char *ss = "adab";

int arr[26]= {-1};

int i=0;
for(i=0;i<strlen(str);i++)
{
	int t = str[i] - (int)'a';
	arr[t] = arr[t] +1;
}


return 0;
}
