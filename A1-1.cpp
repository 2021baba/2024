#include <stdio.h>

int main()
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    	if(c>a)
		printf("%d %d %d",c,a,b);
		else if(c>b)//a>c,a>b,c>b
		printf("%d %d %d",a,c,b);
		else//a>b,a>c,b>c
		printf("%d %d %d",a,b,c);	
    }
    else//b>a
    {
    	if(c>b)//b>a,c>b
    	printf("%d %d %d",c,b,a);
    	else if(a>c)//b>c,b>a,a>c
		printf("%d %d %d",b,a,c);
		else//b>a,b>c,c>a 
		printf("%d %d %d",b,c,a);
    }
	return 0;
}
