//#include <iostream>
//using namespace std;
//
////�����̳�
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
////�����̳�
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A; //�����еĹ���Ȩ�޳�Ա	��������Ȼ�ǹ���Ȩ��
//		m_B; //�����еı���Ȩ�޳�Ա	��������Ȼ�Ǳ���Ȩ��
//		//m_C; //�����е�˽��Ȩ�޳�Ա	������ʲ���
//	}
//};
//
//void myClass()
//{
//	Son1 s1;
//	s1.m_A; //������ֻ�ܷ��ʵ�����Ȩ��
//}
//
////�����̳�
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
//		m_A; //�����й�����Ա	�������Ϊ����Ȩ��
//		m_B; //�����б�����Ա	�������Ϊ����Ȩ��
//		//m_C; //������˽�г�Ա	������ʲ���
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //m_A��Ϊ����Ȩ��	���������ʲ���
//	//s.m_B; //m_B��Ϊ����Ȩ��	���ɷ���
//}
//
////˽�м̳�
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
//		m_A; //�����й�����Ա	�������Ϊ����Ȩ��
//		m_B; //�����б�����Ա	�������Ϊ����Ȩ��
//		//m_C; //�����й�����Ա	��������ʲ���
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};