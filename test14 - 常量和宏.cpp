//14.常量和宏 
//define定义符号，预处理指令
 #include<stdio.h>
#define MAX 1000//define定义常量
#define ADD(x,y) ((x)+(y))//define定义宏
 
int main()
{
	
	printf("%d\n", MAX ); 
	printf("%d\n",ADD(2,3));
	return 0;
 } 
