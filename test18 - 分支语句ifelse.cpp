//18.if else���
#include<stdio.h>
int main ()
{
	int age =0 ;
	printf("����������\n"); 
	scanf("%d",&age);
	
	if (age < 18)
		printf("δ����\n");//if else����{}ֻ��һ�� ,����Ҫ��{} 
	else if(18 < age && age < 60) 
		printf("����\n"); 
	else
		printf("����\n");
	return 0;
 } 
 /*
#include <stdio.h>
int main
{
	int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
		printf ("hehe\n") ;
	else
		printf("haha\n") ;
return 0;
}
ʲô������ӡ��else���Ͷ���Ĵ��䣬�������if���䣬��ʹ��{}���ı� 
#include <stdio.h>
int main
{
	int a = 0;
	int b = 2;
	if(a == 1)
	{	if(b == 2)
		{
		printf ("hehe\n");
		}	
	else
		{
		printf("haha\n");
		}		
	}
return 0;
}
*/

