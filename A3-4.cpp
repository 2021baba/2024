#include<stdio.h>



int judge(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int x;
	scanf("%d",&x);
	
	for(int x1=2;x1<=x/2;x1++)
	{
		int x2=x-x1;
		if(judge(x1)&&judge(x2))
		{
			printf("%d + %d = %d\n",x1,x2,x);
		}
	}
	
	
	return 0;
}
