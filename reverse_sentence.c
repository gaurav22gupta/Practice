#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *reverse(char *str,int len)
{
	char *tmp = (char *)malloc(sizeof(len));
	int i=0,j=len-1;
	while(i<=j)
	{
		tmp[i] = str[j];
		tmp[j] = str[i];
		i++;
		j--;
	}
//	printf("%s",tmp);
//	reverse_word(tmp);
//	free(tmp);

return tmp;
}

int main()
{
		char *str = "My name is Gaurav";

		char *tmp = NULL;
		int len = strlen(str);
		char *ch = reverse(str,len);
		int i=0,start =0;
		printf("%s\n",ch);
		start=i;
		for(i=0;i<=strlen(ch);i++)
		{
			if(	ch[i] == ' ' || ch[i]== '\0')
			{
				tmp=reverse(ch+start,i-start);
				printf("%s",tmp);
				printf("%c",ch[i]);
				free(tmp);
				start=i+1;
			}
		}
		//tmp=strtok(ch," ");
	//	reverse_word(ch);


		free(ch);
		return 0;
}
