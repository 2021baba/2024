#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a,&b);//输入a和b的值 
	//scanf函数为输入函数，%d和&a对应 
	sum = a+b ;
	printf("sum=%d\n",sum);
	
	return 0; 
}
