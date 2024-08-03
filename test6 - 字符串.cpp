//6.字符串
//字符串就是一串字符 - 用双引号括起来的一串字符 
#include<stdio.h>
#include<string.h>
int main()
{
	
	//字符数组 - 数组是一组相同类型的元素
	//字符串的结尾隐藏了一个\0的字符
	//\0为字符串的结束标志 
	//求字符串长度,\0不算字符串长度 
	int len = strlen("abc");
	printf("%d\n",len); 
	
	
	return 0;
}
