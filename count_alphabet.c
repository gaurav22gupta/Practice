#include <stdio.h>

int main()
{
char s[15] = {'a','b','b','b','c','c','d','e','e','f','f','f','f','f','g'};

int count=1;
char c[1],tmp_char;
int i=0,pos=1,char_pos=0;

tmp_char = s[0];

for(i=0;i<15;i++)
{
	if(tmp_char == s[i+1] && (i+1) != 15)
	{
		count++;
	}
	else
	{
		s[char_pos] = tmp_char;
		sprintf(c,"%d",count);
		tmp_char = s[i+1];
		s[pos] = c[0];
	
		if(i+1 == 15)
			break;

		pos = pos+2;
		char_pos = char_pos+2;
		count=1;
	}
}	

for(i=pos+1;i<15;i++)
	s[i] = '\0';

for(i=0;i<15;i++)
	printf("%c ",s[i]);

	return 0;
}
