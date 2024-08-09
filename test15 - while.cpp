#include<stdio.h>
int main()
{
	int i = 0;
	while (i<3)
	{
		printf("1\n");
		i++;
	}//打印3个1
	
	for (int a=0;a<3;a++)
	{
		printf("2\n");
	}//打印3个2 
	
	for (int m=0;m<3;m++)
	{
		for (int n=0;n<3;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//打印边长为3的正方形 
	printf("\n");
	
	const int x=3;//const使x无法被改变 
	for (int m=0;m<x;m++)
	{
		for (int n=0;n<x;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//打印边长为x的正方形 
	
	int z =0;
	printf("边长为：“); 
	scanf("%d",&z);
	for (int m=0;m<z;m++)
	{
		for (int n=0;n<z;n++)
		{
			printf("#");	
		}
		printf("\n");
	}	//打印边长为x的正方形 
	
	return 0;
}
