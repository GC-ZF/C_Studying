//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//public:
//	int m_A;
//};
//
//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "Son下的m_A = " << s.m_A << endl;
//	cout << "Base下的m_A = " << s.Base::m_A << endl;
//
//	s.func();
//	//s.func(10); //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	s.Base::func();
//	s.Base::func(10);	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}