//13.关键字 
//C语言提供的， 不能自己创建
//关键字不能做变量名 

// a. auto 是自动的 -  每个局部变量都是auto修饰的（自动创建，自动销毁），auto基本省略
// b. break 打破循环
// extern 声明外部符号
//register 
//signed 有符号的，unsigned无符号的 
//static 静态的
//union 联合体
//void 无，空 
//volatile 

//define, include 不是关键字，是预处理指令 
#include<stdio.h>
void test1()
{
	int a = 1;
	a++;
	printf("%d",a);
 } 
void test2()
{
	static int b = 1;//static修饰局部变量，改变生命周期（本质上改变变量储存类型） 
	b++;
	printf("%d",b);
 } 

int main()
{
	register int num = 100;//建议num的值存放在寄存器中,大量被使用的数据放在寄存器提高效率 
	/*计算机数据存储位置，
	寄存器    更小 
	高速缓存   几十MB 
	内存    8-16G
	硬盘    500G
	速度越快，造价越高，空间越小 
	*/

	//typedef类型重定义
	unsigned int num1 = 100;
	/*等于
	typedef unsigned int u_int;
	u_int num = 100 ;*/
	
	//static 静态的，本质上将外部链接属性变为内部链接属性 
	//1.static 修饰局部变量
	//2.static 修饰全局变量，修饰后变量只能在源文件内部使用 
	//3.static 修饰函数 ， 修饰后函数只能在源文件内部使用 
	
	int i = 0;
	while( i < 10)
	{
		test1();
		test2();
		i++;
	}
	return 0; 
}

