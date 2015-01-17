#include <stdio.h>
#include <malloc.h>

int pow(int a,int b)
{
		int ret = a;
		int i=0;
		for(i=1;i<b;i++)
		{
				ret= ret*a;
		}

		return ret;
}

int main(int argc,char *argv[])
{
		int i,j;

		printf("number of dices:%d\n",atoi(argv[1]));
		printf("number of sides:%d\n",atoi(argv[2]));

		int nu_of_dice = atoi(argv[1]);
		int nu_of_sides = atoi(argv[2]);
		int *arr = (int *)malloc(sizeof(int) * ((nu_of_sides * 2) + 1));
		
		for(i=0;i<=(nu_of_sides * 2);i++)
			arr[i]=0;

		int count = pow(nu_of_sides,nu_of_dice);

		for(i=1;i<=nu_of_sides;i++)
		{
			for(j=1;j<=nu_of_sides;j++)
			{
				arr[i+j]++;
			}
		}

		for(i=2;i<= (nu_of_sides*2);i++)
			printf("%d: %d\n",i,arr[i]);

		free(arr);
		return 0;
}

