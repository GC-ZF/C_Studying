//#include <iostream>
//using namespace std;
//#include <string>
//
////��Ա��������Ϊ˽��
////1.�����Լ����ƶ�дȨ��
////2.���ڿ��Լ�����ݵ���Ч��
//
////�����  ��
//class Person
//{
//public:
//	//д����
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ���� ֻ��
//	int getAge()
//	{
//		m_Age = 0;//��ʼ��Ϊ0
//		return m_Age;
//	}
//	//�������� ��д
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "��������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//�������� ֻд
//	void setLover(string Lover)
//	{
//		m_Lover = Lover;
//	}
//private:
//	string m_Name;//���� �ɶ���д
//	int m_Age;//����  ֻ��
//	string m_Lover;//���� ֻд
//};
//int main()
//{
//	Person p;
//	p.SetName("����");
//	cout << "����Ϊ:" << p.getName() << endl;
//	p.setAge(1000);
//	cout << "����Ϊ:" << p.getAge() << endl;
//	//��������
//	p.setLover("�Ծ�");
//	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ
//
//	system("pause");
//	return 0;
//}