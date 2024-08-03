#include<stdio.h>
//常量
//1.字面常量，如3.12 ，abc ,13dasd等

//2.const修饰的常变量 
int num = 10;//变量
const int a =10;//常变量 - 具有常属性（不能被改变的属性）- 本质还是变量 

//int main()
//{
//	  num = 20;
//	  printf("%d\n",num);
//	  printf("%d\n",a);
//	  return 0;
// }  

//3.#define定义的常量
#define MAX 10000 //MAX的值无法通过后续程序修改 
//int main()
//{
//	  int n = MAX;
//	  printf("%d\n",n);
//	  return 0;
//}

//4.枚举常量
//可以一一列举常量
//例如性别等
enum Sex
{
	//这种枚举常量的未来可能取值
	MALE = 2,
	FEMALE,
	SECRET
	//常量的值逐一增加1
	//可以赋初值 
 } ;
 
 int main()
 {
 	enum Sex s = MALE;
 	printf("%d\n",MALE); 
 	printf("%d\n",FEMALE);
 	printf("%d\n",SECRET);
 	return 0;
  } 
