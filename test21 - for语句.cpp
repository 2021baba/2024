//20.for���
#include<stdio.h>
int main()
{
	int i = 0;
	for (i=1;i<10;i++)//��ʼ�����жϣ����� ��������ʡ����;����
	//�ж�ʡ����ѭ�� 
	{
		if(i==5)
			continue;
			 
		printf("%d\n",i);
	}
	//forѭ���ڲ��ɸı�ѭ������i ����������ҿ� ��i<10 
	return 0;
 } 
