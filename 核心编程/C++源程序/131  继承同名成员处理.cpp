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
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
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
//		cout << "Son - func()����" << endl;
//	}
//public:
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "Son�µ�m_A = " << s.m_A << endl;
//	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
//
//	s.func();
//	//s.func(10); //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	s.Base::func();
//	s.Base::func(10);	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}