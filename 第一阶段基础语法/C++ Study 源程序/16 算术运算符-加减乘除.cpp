#include <iostream>
using namespace std;
#include <string>

int main16()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;

	cout << a1 << "+" << b1 << "=" << a1 + b1 << endl;
	cout << a1 << "-" << b1 << "=" << a1 - b1 << endl;
	cout << a1 << "*" << b1 << "=" << a1 * b1 << endl;
	cout << a1 << "��" << b1 << "=" << a1 / b1 << endl;//������������������Ȼ����������С������ȥ��

	int a2 = 10;
	int b2 = 20;
	cout << a2 << "��" << b2 << "=" << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	/*cout << a3 << "/" << b3 << "=" << a3 / b3 << endl;*///���������������������Ϊ0

	//����С���������  ������Ҳ��С��
	double a4 = 0.5;
	double b4 = 0.25;
	cout << a4 << "��" << b4 << "=" << a4 / b4 << endl;

	system("pause");
	return 0;
}