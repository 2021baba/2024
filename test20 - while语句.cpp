//20.while���
/*while(���ʽ)
	ѭ�����
*/
#include<stdio.h>
int main ()
{
	int i=1;
	while(i<=10)
	{
		if (i==4)
			continue;//continue����������ѭ��continue��Ĵ��룬�������� 
			//���Ƿ������һ��ѭ�� 
		if (i==5)
			break;//��whileѭ����break��������ѭ�� 
		
		printf("%d\n",i);
		i++;
	}
	return 0;
}
