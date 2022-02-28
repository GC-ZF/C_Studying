//#include <iostream>
//using namespace std;
//#include <string>
//
////成员属性设置为私有
////1.可以自己控制读写权限
////2.对于可以检测数据的有效性
//
////设计人  类
//class Person
//{
//public:
//	//写姓名
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄 只读
//	int getAge()
//	{
//		m_Age = 0;//初始化为0
//		return m_Age;
//	}
//	//设置年龄 可写
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "输入有误" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//设置情人 只写
//	void setLover(string Lover)
//	{
//		m_Lover = Lover;
//	}
//private:
//	string m_Name;//姓名 可读可写
//	int m_Age;//年龄  只读
//	string m_Lover;//情人 只写
//};
//int main()
//{
//	Person p;
//	p.SetName("张三");
//	cout << "姓名为:" << p.getName() << endl;
//	p.setAge(1000);
//	cout << "年龄为:" << p.getAge() << endl;
//	//设置情人
//	p.setLover("苍井");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
//
//	system("pause");
//	return 0;
//}