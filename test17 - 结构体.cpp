//17.结构体
#include<stdio.h>
//结构体 可以创建一个新的类型
//创建一个学生 
struct Stu
{
	char name [20];//成员 
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
	struct Stu s = {"张三",20,85.5};//结构体的创建和初始化 
	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量 
	
	struct Stu *ps=&s;
	printf("%s %d %lf\n", (*ps).name,(*ps).age, (*ps).score);//指针变量 
	
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//指针变量 
	
	return 0;
} 
