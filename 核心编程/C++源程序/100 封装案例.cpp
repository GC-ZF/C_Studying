//#include <iostream>
//using namespace std;
//#include <string>
//
////设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//class Student
//{
//public:
//	//类中的属性和行为 我们统一称为成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//
//
//	//属性
//	string m_Name;
//	int m_Id;
//
//	//行为  显示姓名和学号
//	void show()
//	{
//		cout << m_Name <<" "<< m_Id << endl;
//	}
//	//给姓名赋值
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//给学号赋值
//	void setId(int Id)
//	{
//		m_Id = Id;
//	}
//};
//int main()
//{
//	//创建一个具体学生 实例化对象
//	Student s1;
//	s1.setName("张三");
//	//s1.m_Name = "张三";
//	s1.m_Id = 1;
//	//显示学生信息
//	s1.show();
//
//	Student s2;
//	s2.m_Name="李四";
//	s2.m_Id = 2;
//	s2.show();
//
//	system("pause");
//	return 0;
//}