#include <iostream>
using namespace std;

int main11()
{
	//1.�ַ��ͱ��� char ������ = '�ַ�'
	char ch = 'A';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ�:" << sizeof(char) << endl;

	//3.�ַ��ͱ�����������
	//ch = "b";			//���󣬲�������˫����
	//ch = 'abcd';		//���󣬵�����ֻ������һ���ַ�

	//4.�ַ��ͱ�����ӦASCII��
	cout <<"ch ����Ӧ��ASCII��:"<< (int)ch << endl;	//���ַ���Ӧ��ASCII��ǿת����int��

	system("pause");
	return 0;
}