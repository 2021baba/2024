//10.函数 
#include<stdio.h>
int Add(int x,int y)//自己定义Add函数 
{
	int z=0;
	z = x+y;
	return z;
}



int main()
{
	int num1 = 1;
	int num2 = 2;
	scanf("%d%d",&num1,&num2);
	int sum1 = num1+num2;//变量方式
	int sum2 = Add(num1,num2);//使用Add函数 
	printf("%d\n",sum1);
	printf("%d\n",sum2);
	
	
	return 0;
	
 } 
