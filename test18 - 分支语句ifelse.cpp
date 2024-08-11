//18.if else语句
#include<stdio.h>
int main ()
{
	int age =0 ;
	printf("请输入年龄\n"); 
	scanf("%d",&age);
	
	if (age < 18)
		printf("未成年\n");//if else不加{}只管一句 ,多条要加{} 
	else if(18 < age && age < 60) 
		printf("青年\n"); 
	else
		printf("老年\n");
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
什么都不打印，else不和对齐的搭配，和最近的if搭配，可使用{}来改变 
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

