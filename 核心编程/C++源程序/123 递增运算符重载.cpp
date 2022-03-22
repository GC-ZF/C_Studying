#include <iostream>
using namespace std;

//���ص��������
//�Զ�������
class MyInteger 
{
	friend ostream& operator<<(ostream& out, MyInteger myint);
public:
	MyInteger() 
	{
		m_Num = 0;
	}
	//ǰ��++
	MyInteger& operator++() //��ʽ˼�� ����������Ϊ��һֱ��һ�����ݽ��е�������
	{
		//��++
		m_Num++;
		//�ٽ�������
		return *this;
	}
	//����++
	//int ����ռλ����,������������ǰ�úͺ��õ���
	MyInteger operator++(int) //�ֲ����󣬲�������ڴ��ͷţ����ʹ�������ǷǷ�����
	{
		//��  ��¼��ʱ���
		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
		//�����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	}
private:
	int m_Num;
};


ostream& operator<<(ostream& out, MyInteger myint) 
{
	out << myint.m_Num;
	return out;
}


//ǰ��++ ��++ �ٷ���
void test01() 
{
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt << endl;

	//cout << ++(++myInt) << endl;
	//cout << myInt << endl;//���������ʽ˼�룬���ص���++myInt
}

//����++ �ȷ��� ��++
void test02() 
{
	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main() 
{
	test01();
	//test02();

	system("pause");
	return 0;
}