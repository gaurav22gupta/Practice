#include <stdio.h>

int main()
{

char *str = "abc def ghu";
int len = strlen(str);
int i =0,j=0;
char *ss = (char *)malloc(len);
for(i=0,j=0;i<len;i++)
{
	if(str[i]!= ' ')
	{
		strncpy(ss+j,str+i,1);
		j++;
	}
	
}

printf("%s\n",ss);

return 0;
}
