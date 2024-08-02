#include <stdio.h>
int a=100;//大括号外为全局变量  

int main()
{
	//创建一个变量
	//int为类型，age为名称 = 0  （或直接类型+名称）
	 
	int age = 20;//大括号内为局部变量 
	double weight = 70.00;
	
	age =age+1;
	weight =weight-10;
	printf("%d\n",age);
	printf("%lf\n",weight);

	return 0;
 } 
 //%d - 整型
 //%f - float
 //%lf -double 
 
 
 //3.变量分类：
 //局部变量 - {}内 
 //全局变量 - {}外 
 //全局和局部冲突时局部优先 
