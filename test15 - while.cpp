#include<stdio.h>
int main()
{
	int i = 0;
	while (i<3)
	{
		printf("1\n");
		i++;
	}//��ӡ3��1
	
	for (int a=0;a<3;a++)
	{
		printf("2\n");
	}//��ӡ3��2 
	
	for (int m=0;m<3;m++)
	{
		for (int n=0;n<3;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//��ӡ�߳�Ϊ3�������� 
	printf("\n");
	
	const int x=3;//constʹx�޷����ı� 
	for (int m=0;m<x;m++)
	{
		for (int n=0;n<x;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//��ӡ�߳�Ϊx�������� 
	
	int z =0;
	printf("�߳�Ϊ����); 
	scanf("%d",&z);
	for (int m=0;m<z;m++)
	{
		for (int n=0;n<z;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//��ӡ�߳�Ϊx�������� 
	
	return 0;
}
