//8.选择语句
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("helloworld\n");
	printf("你要好好学习吗？\n（1/0）");
	scanf("%d",&input);
	if(input == 1)//无分号 
		printf("好offer");//有分号
	else//无分号
		printf("烤红薯"); //有分号
	return 0;
 } 
