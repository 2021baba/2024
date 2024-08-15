#include <stdio.h>

int main()
{
	int i,b,sum=0;

	scanf("%d",&b);
	for(int m = 2;m <= b;m++)
	{
		int prime=1;
		for(i=2;i<m;i++)
		{
			if (m%i==0)
				prime=0;
				break;
			sum+=1;
		}
		if (prime==1)
		{
			sum+=1; 
		}
	}
	printf("%d",sum);
	
	return 0;
}
