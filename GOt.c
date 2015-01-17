#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int count[26];

findPalind(char *arr)
{

		int flag = 0;
		// Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
		int i=0,index=0,j=0;
		int even=0,odd=0;
	//	for(i=0;i<strlen(arr);i++){
			while(arr[j]!='\0'){
				index = arr[j]-'a';
				count[index]++;
				j++;
			}
		for(i=0;i<26;i++)
		{
				if(count[i])
				{
						if(!(count[i]%2))
								even++;
						else
								odd++;
				}
		}
		if(j%2)
	//	if(strlen(arr)%2)
		{
				if(odd ==1 && even)
						flag=0;
				else
						flag=1;
		}
		else
		{
				if(odd)
						flag=1;
		}
		if (flag==0)
				printf("YES\n");
		else
				printf("NO\n");

		return;
}
int main() {

		char arr[100001];
		scanf("%s",arr);
		findPalind(arr);
		return 0;
}
