//16.指针 就是 地址 
/*内存
1.内存怎么编号？ 
2.一个内存单元多大空间？ 
32位 - 32根地址线 - 物理线 - 通电 -1/0 电信号转化为数字信号：0，1组成的二进制序列
地址 - 32个1和0，00000000000000000000000000000001
2的32次方个内存单元 1个内存单元为1个字节，
2的32次方=4,294,967,296bit 
/8=536,870,912byte
/1024=524,288KB
/1024=512MB
/1024=0.5GB
char - 1byte - 1个地址	*/
#include<stdio.h> 
int main()
{
	int a=10;//a在内存中要分配的空间4个字节
	printf("%p\n",&a);//，%p专门用来打印地址，&a取地址只取第一个字节 
	int* pa = &a;//pa是用来存放地址的 ，在c语言中叫指针变量
	//*说明pa为指针变量
	//int 说明pa执行对象是int类型 
	
	*pa =20;//*解引用操作 ，*pa就是通过pa里边的地址找到a 
	printf("%d\n",a);

	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(double*)); 
	//指针大小相同都是4，指针取决于地址存储需要多大空间
	//32位4byte,64位8byte 
	 
	
	return 0; 
}								   
