//13.�ؼ��� 
//C�����ṩ�ģ� �����Լ�����
//�ؼ��ֲ����������� 

// a. auto ���Զ��� -  ÿ���ֲ���������auto���εģ��Զ��������Զ����٣���auto����ʡ��
// b. break ����ѭ��
// extern �����ⲿ����
//register 
//signed �з��ŵģ�unsigned�޷��ŵ� 
//static ��̬��
//union ������
//void �ޣ��� 
//volatile 

//define, include ���ǹؼ��֣���Ԥ����ָ�� 
#include<stdio.h>
void test1()
{
	int a = 1;
	a++;
	printf("%d",a);
 } 
void test2()
{
	static int b = 1;//static���ξֲ��������ı��������ڣ������ϸı�����������ͣ� 
	b++;
	printf("%d",b);
 } 

int main()
{
	register int num = 100;//����num��ֵ����ڼĴ�����,������ʹ�õ����ݷ��ڼĴ������Ч�� 
	/*��������ݴ洢λ�ã�
	�Ĵ���    ��С 
	���ٻ���   ��ʮMB 
	�ڴ�    8-16G
	Ӳ��    500G
	�ٶ�Խ�죬���Խ�ߣ��ռ�ԽС 
	*/

	//typedef�����ض���
	unsigned int num1 = 100;
	/*����
	typedef unsigned int u_int;
	u_int num = 100 ;*/
	
	//static ��̬�ģ������Ͻ��ⲿ�������Ա�Ϊ�ڲ��������� 
	//1.static ���ξֲ�����
	//2.static ����ȫ�ֱ��������κ����ֻ����Դ�ļ��ڲ�ʹ�� 
	//3.static ���κ��� �� ���κ���ֻ����Դ�ļ��ڲ�ʹ�� 
	
	int i = 0;
	while( i < 10)
	{
		test1();
		test2();
		i++;
	}
	return 0; 
}

