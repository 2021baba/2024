//10.���� 
#include<stdio.h>
int Add(int x,int y)//�Լ�����Add���� 
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
	int sum1 = num1+num2;//������ʽ
	int sum2 = Add(num1,num2);//ʹ��Add���� 
	printf("%d\n",sum1);
	printf("%d\n",sum2);
	
	
	return 0;
	
 } 
