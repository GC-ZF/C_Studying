//#include <iostream>
//using namespace std;
//
////公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A; //父类中的公共权限成员	到子类依然是公共权限
//		m_B; //父类中的保护权限成员	到子类依然是保护权限
//		//m_C; //父类中的私有权限成员	子类访问不到
//	}
//};
//
//void myClass()
//{
//	Son1 s1;
//	s1.m_A; //其他类只能访问到公共权限
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A; //父类中公共成员	到子类变为保护权限
//		m_B; //父类中保护成员	到子类变为保护权限
//		//m_C; //父类中私有成员	子类访问不到
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //m_A变为保护权限	因此类外访问不到
//	//s.m_B; //m_B变为保护权限	不可访问
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A; //父类中公共成员	到子类变为保护权限
//		m_B; //父类中保护成员	到子类变为保护权限
//		//m_C; //父类中公共成员	到子类访问不到
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};