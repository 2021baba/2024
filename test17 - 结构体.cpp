//17.�ṹ��
#include<stdio.h>
//�ṹ�� ���Դ���һ���µ�����
//����һ��ѧ�� 
struct Stu
{
	char name [20];//��Ա 
	int age;
	double score;
};
 struct Book
{
	char name [20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"����",20,85.5};//�ṹ��Ĵ����ͳ�ʼ�� 
	printf("%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա���� 
	
	struct Stu *ps=&s;
	printf("%s %d %lf\n", (*ps).name,(*ps).age, (*ps).score);//ָ����� 
	
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//ָ����� 
	
	return 0;
} 
