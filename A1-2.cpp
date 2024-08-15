#include <stdio.h>

int main()
{
	int max;
	int mid;
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    	if(c>a)
		{
		max=c;
		mid=a;
		}	
		else if(c>b)//a>c,a>b,c>b
		{
		max=a;
		mid=c;
		}
		else//a>b,a>c,b>c
		{
		max=a;
		mid=b;
		}	
    }
    else//b>a
    {
    	if(c>b)//b>a,c>b
    	{
		max=c;
    	mid=b;
		}
    	else if(a>c)//b>c,b>a,a>c
		{
		max=b;
		mid=a;
		}
		else//b>a,b>c,c>a 
		{
		max=b;
		mid=c;
		}
    }
    printf("%d %d",mid,max);
	return 0;
}
