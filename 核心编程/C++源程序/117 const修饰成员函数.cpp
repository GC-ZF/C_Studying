//#include <iostream>
//using namespace std;
//
////������
//class Person
//{
//public:
//	//thisָ��ı��� ��ָ�볣�� ָ���ָ�򲻿����޸� ָ��
//	//Person * const this;
//	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
//	void showPerson() const
//	{
//		//this->m_A = 100;
//		//this = NULL; //thisָ�벻�����޸�ָ���ָ��
//		this->m_B = 100;
//	}
//	void func()
//	{
//
//	}
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
////������
//void test02()
//{
//	const Person p;//�ڶ���ǰ��const,��Ϊ������
//	//p.m_A=100;
//	p.m_B = 100; //m_B������ֵ���ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();  //�����󲻿��Ե�����ͨ�ĳ�Ա��������Ϊ��ͨ��Ա���������޸�����
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}