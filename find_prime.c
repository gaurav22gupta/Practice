#include <stdio.h>

int *AllPrimeNumbersLessThan(int resultArray[11],int n)
{
	//	int resultArray[n+1]  = {1};
		int i=0;
	for(i=2; i<=n; i++)
		{
				if(resultArray[i]==1)
				{
						int mul_factor = 2;
						while(mul_factor*i<=n)
						{
								resultArray[mul_factor*i] = 0;
								mul_factor++;
						}
				}
		}
		return resultArray;
}


int main()
{
		int *vec = (int *)malloc(sizeof(int ) * 21);
		int i=0;
		for(i=0;i<21;i++)
			vec[i]= 1;
	
		vec = AllPrimeNumbersLessThan(vec,20);
		printf("All Prime Numbers less than 10 are: \n");
	for(i=1; i<21; i++)
	{			
		if(vec[i])
			printf("%d ",i);
	}
		return 0;
}
