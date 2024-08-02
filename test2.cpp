  //2.数据类型
 // char 字符数据类型
 //short 短整型
 //int 整型
 //long 长整型
 //long long 更长整型
 //float 单精度浮点数
 //double 双精度浮点数 



 //a
 //'a' - 字符a
 
 //int main()
 //{
 	//字符类型
	 char ch = 'a';
	 //整型 
	 int age =20; 
	 //短整型
	 short num = 10; 
	 //long
	 //long long类似 
	 
	 //单精度浮点型
	 float weight = 55.5;
	 //双精度浮点型
	 double d = 12.12;
	  
 //}
 //ch age num weight d等都是自己编的，基本可以随便命名 



#include <stdio.h> 

int main()
 {
 	printf("hehe\n");//  \n - 表示换行输出 
 	
 	printf("%d\n",100);//打印一个整数 - %d 前后有“” -逗号之后是数字 
 	
 	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));//sizeof - 操作符-计算类型或变量所占类型大小 
 	return 0;
 }

 
 //计算机中的单位
 //bit - 比特位 一个二进制位0或1
 //byte - 字节 = 8bit
 //kb = 1024byte
 //MB = 1024KB
 //GB = 1024MB
 //TB = 1024GB
 //PB = 1024TB
 
