#include <iostream>
using namespace std;
#include <string>

int main15()
{
	//1.����
	int  int_type;
	cout << "������ͱ���int_type��ֵ:" << endl;
	cin >> int_type;
	cout << "���ͱ���int_type=" << int_type << endl<<endl;

	//2.������
	float  float_type;
	cout << "��������ͱ���float_type��ֵ:" << endl;
	cin >> float_type;
	cout << "�����ͱ���float_type=" << float_type << endl << endl;

	//3.�ַ���
	char  char_type;
	cout << "����ַ��ͱ���char_type��ֵ:" << endl;
	cin >> char_type;
	cout << "�ַ��ͱ���char_type=" << char_type << endl << endl;

	//4.�ַ�����
	string  string_type;
	cout << "����ַ����ͱ���string_type��ֵ:" << endl;
	cin >> string_type;
	cout << "�ַ����ͱ���string_type=" << string_type << endl << endl;

	//5.bool����  ���ܸ�ֵӢ��(Ӣ���ַ�ȫΪ��)����0����ֵ����ʾ��
	bool  bool_type;
	cout << "����ַ����ͱ���bool_type��ֵ:" << endl;
	cin >> bool_type;
	cout << "�ַ����ͱ���bool_type=" << bool_type << endl << endl;

	system("pause");
	return 0;
}