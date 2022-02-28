//#include <iostream>
//using namespace std;
//
////空指针调用成员函数
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge()
//	{
//		//报错原因是因为传入的指针是为NULL
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << /*this->*/m_Age << endl;
//	}
//	int m_Age;
//};
//void test01()
//{
//	Person *p = NULL;
//	p->showClassName(); //空指针，可以调用成员函数
//	p->showPersonAge();  //但是如果成员函数中用到了this指针，就不可以了
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}