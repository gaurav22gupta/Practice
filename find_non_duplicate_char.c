#include <stdio.h>


int main(int argc,char *argv[])
{

int char_count[26] = {0};
int i=0;

for(i=0;i<strlen(argv[1]);i++)
{
	char_count[argv[1][i] - 'a']++;
	if(argv[1][i] == argv[1][i+1])
		char_count[argv[1][i] - 'a']++;
}

for(i=0;i<strlen(argv[1]);i++)
{
	if(char_count[argv[1][i] - 'a'] == 1)
	{
		printf("first distinct char is %c\n",argv[1][i]);
		break;
	}
}
if(i == strlen(argv[1]))
		printf("there is no distinct char\n");
return 0;
}


