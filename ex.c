#include<stdio.h>
#include<string.h>


int main()
{
		char ch='0';
		char ch1='9';
		char ch2='a';
		char ch3='z';
		char ch4='A';
		char ch5='Z';
		int arr[6]={9,3,1,5,2,4};
		printf("%d\n",ch);
		printf("%d\n",ch1);
		/*	printf("%d\n",ch2);
			printf("%d\n",ch3);
			printf("%d\n",ch4);
			printf("%d\n",ch5);
		 */
		merge(arr,0,5);
		int i=0;
		for(i=0;i<6;i++)
				printf("%d ",arr[i]);
		printf("\n");
		printf("%d\n",min_of_array(arr,6));
		printf("%d\n",max_of_array(arr,6));
		if(isDigit(ch))
				printf("is digit");
		else
				printf("is not digit");
		return 0;
}
