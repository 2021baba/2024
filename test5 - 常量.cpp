#include<stdio.h>
//����
//1.���泣������3.12 ��abc ,13dasd��

//2.const���εĳ����� 
int num = 10;//����
const int a =10;//������ - ���г����ԣ����ܱ��ı�����ԣ�- ���ʻ��Ǳ��� 

//int main()
//{
//	  num = 20;
//	  printf("%d\n",num);
//	  printf("%d\n",a);
//	  return 0;
// }  

//3.#define����ĳ���
#define MAX 10000 //MAX��ֵ�޷�ͨ�����������޸� 
//int main()
//{
//	  int n = MAX;
//	  printf("%d\n",n);
//	  return 0;
//}

//4.ö�ٳ���
//����һһ�оٳ���
//�����Ա��
enum Sex
{
	//����ö�ٳ�����δ������ȡֵ
	MALE = 2,
	FEMALE,
	SECRET
	//������ֵ��һ����1
	//���Ը���ֵ 
 } ;
 
 int main()
 {
 	enum Sex s = MALE;
 	printf("%d\n",MALE); 
 	printf("%d\n",FEMALE);
 	printf("%d\n",SECRET);
 	return 0;
  } 
