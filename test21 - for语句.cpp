//20.for语句
#include<stdio.h>
int main()
{
	int i = 0;
	for (i=1;i<10;i++)//初始化；判断；调整 三个均可省略有;即可
	//判断省略死循环 
	{
		if(i==5)
			continue;
			 
		printf("%d\n",i);
	}
	//for循环内不可改变循环变量i ，建议左闭右开 即i<10 
	return 0;
 } 
