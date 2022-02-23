#include <iostream>
using namespace std;
#include <string>

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};
//1.值传递
void printStudent1(student s)
{
	s.age = 100;
	cout << "子函数1中 姓名: " << s.name << " 年龄: " << s.age << " 分数: " << s.score << endl;
}
//2.地址传递
void printStudent2(student *p)
{
	p->age = 200;
	cout << "子函数2中 姓名: " << p->name << " 年龄: " << p->age << " 分数: " << p->score << endl;
}
int main68()
{
	//结构体做函数参数
	//将学生传入一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s = { "张三",20,85 };
	//cout << "姓名: " << s.name << " 年龄: " << s.age << " 分数: " << s.score << endl;

	printStudent1(s);
	cout << "main函数中 姓名: " << s.name << " 年龄: " << s.age << " 分数: " << s.score << endl;
	printStudent2(&s);
	cout << "main函数中 姓名: " << s.name << " 年龄: " << s.age << " 分数: " << s.score << endl;

	system("pause");
	return 0;
}